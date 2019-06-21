# Sad Sample

This was going to be a performance test of Kotlin Multiplatform, but I noticed 
1.3.40 had significant changes, and in talking to the native team, I think they
probably have much better performance measures elsewhere.

However, somebody asked how to [config generics](https://blog.jetbrains.com/kotlin/2019/06/kotlin-1-3-40-released/).
Now this is a sample showing how to do that.

The tricky parts are passing the config to the compiler:

```groovy
    iosX64("ios") {
        compilations.main {
            binaries {
                framework("arst") {
                    freeCompilerArgs.add("-Xobjc-generics")
                }
            }
        }
    }
```

and getting the link task name for the test task to depend on (which I assume will be baked into the plugin at some
point):

```groovy
task copyFramework {
    def buildType = project.findProperty('kotlin.build.type') ?: 'DEBUG'
    def target = project.findProperty('kotlin.target') ?: 'ios'
    dependsOn kotlin.targets."$target".binaries.getFramework("arst", 'DEBUG').linkTask

    doLast {
        def srcFile = kotlin.targets."$target".compilations.main.getBinary('FRAMEWORK', buildType)
        def targetDir = getProperty('configuration.build.dir')
        copy {
            from srcFile.parent
            into targetDir
            include 'app.framework/**'
            include 'app.framework.dSYM'
        }
    }
}
``` 

In the config section, you can config the name or leave it blank. The alternative form would just be:

```groovy
framework {
    freeCompilerArgs.add("-Xobjc-generics")
}
```

How to config multiple, or how to add a test framework are open questions that I'll explore later.

Fot the link task, the important part is the following:

```groovy
kotlin.targets."$target".binaries.getFramework("arst", 'DEBUG').linkTask
```

If you don't specify a framework name, you can also leave that blank with:

```groovy
kotlin.targets."$target".binaries.getFramework('DEBUG').linkTask
```

The generics are all in Objective-C. To confirm their inclusion here, check out 
`[project]/app/build/bin/ios/arstDebugFramework/arst.framework/Headers/arst.h`

You should see:

```objective-c
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Hello")))
@interface ArstHello<T> : KotlinBase
- (instancetype)initWithT:(T)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (T)component1 __attribute__((swift_name("component1()")));
- (ArstHello<T> *)doCopyT:(T)t __attribute__((swift_name("doCopy(t:)")));
@property (readonly) T t __attribute__((swift_name("t")));
@end;
```