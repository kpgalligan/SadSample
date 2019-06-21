#import <Foundation/Foundation.h>

@class MainBaseData, MainGenNonNull, MainGenVarOut, MainKotlinUnit;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface MainMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface MainMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface MainNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface MainByte : MainNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface MainUByte : MainNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface MainShort : MainNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface MainUShort : MainNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface MainInt : MainNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface MainUInt : MainNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface MainLong : MainNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface MainULong : MainNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface MainFloat : MainNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface MainDouble : MainNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface MainBoolean : MainNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("NoGeneric")))
@protocol MainNoGeneric
@required
- (id _Nullable)myVal __attribute__((swift_name("myVal()")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol MainKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface MainKotlinEnum : KotlinBase <MainKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(MainKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Heyo")))
@interface MainHeyo : MainKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MainHeyo *arst __attribute__((swift_name("arst")));
@property (class, readonly) MainHeyo *qwfp __attribute__((swift_name("qwfp")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MainHeyo *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecursiveType")))
@interface MainRecursiveType : KotlinBase
- (instancetype)initWithT:(MainRecursiveType *)t __attribute__((swift_name("init(t:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MainRecursiveType *t __attribute__((swift_name("t")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenBase")))
@interface MainGenBase : KotlinBase
- (instancetype)initWithArg:(MainBaseData *)arg __attribute__((swift_name("init(arg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MainBaseData *arg __attribute__((swift_name("arg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenDeepUpper")))
@interface MainGenDeepUpper : KotlinBase
- (instancetype)initWithArg:(MainGenNonNull *)arg __attribute__((swift_name("init(arg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MainGenNonNull *arg __attribute__((swift_name("arg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenOpen")))
@interface MainGenOpen : KotlinBase
- (instancetype)initWithArg:(id _Nullable)arg __attribute__((swift_name("init(arg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id _Nullable arg __attribute__((swift_name("arg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenNonNull")))
@interface MainGenNonNull : KotlinBase
- (instancetype)initWithArg:(id)arg __attribute__((swift_name("init(arg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id arg __attribute__((swift_name("arg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenStar")))
@interface MainGenStar : KotlinBase
- (instancetype)initWithArg:(MainGenNonNull *)arg __attribute__((swift_name("init(arg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MainGenNonNull *arg __attribute__((swift_name("arg")));
@end;

__attribute__((swift_name("BaseData")))
@interface MainBaseData : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)asString __attribute__((swift_name("asString()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SomeData")))
@interface MainSomeData : MainBaseData
- (instancetype)initWithNum:(int32_t)num __attribute__((swift_name("init(num:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)asString __attribute__((swift_name("asString()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (MainSomeData *)doCopyNum:(int32_t)num __attribute__((swift_name("doCopy(num:)")));
@property (readonly) int32_t num __attribute__((swift_name("num")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SomeOtherData")))
@interface MainSomeOtherData : MainBaseData
- (instancetype)initWithStr:(NSString *)str __attribute__((swift_name("init(str:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)anotherFun __attribute__((swift_name("anotherFun()")));
- (NSString *)asString __attribute__((swift_name("asString()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MainSomeOtherData *)doCopyStr:(NSString *)str __attribute__((swift_name("doCopy(str:)")));
@property (readonly) NSString *str __attribute__((swift_name("str")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SomeUnrelatedData")))
@interface MainSomeUnrelatedData : KotlinBase
- (instancetype)initWithNum:(int32_t)num __attribute__((swift_name("init(num:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (MainSomeUnrelatedData *)doCopyNum:(int32_t)num __attribute__((swift_name("doCopy(num:)")));
@property (readonly) int32_t num __attribute__((swift_name("num")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForceUse")))
@interface MainForceUse : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)forceUse __attribute__((swift_name("init()")));
@property (readonly) MainGenVarOut *gvo __attribute__((swift_name("gvo")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenVarOut")))
@interface MainGenVarOut : KotlinBase
- (instancetype)initWithArg:(id)arg __attribute__((swift_name("init(arg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id arg __attribute__((swift_name("arg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenVarIn")))
@interface MainGenVarIn : KotlinBase
- (instancetype)initWithTArg:(id)tArg __attribute__((swift_name("init(tArg:)"))) __attribute__((objc_designated_initializer));
- (NSString *)valString __attribute__((swift_name("valString()")));
- (void)goInT:(id)t __attribute__((swift_name("goIn(t:)")));
@end;

__attribute__((swift_name("Hay")))
@protocol MainHay
@required
@end;

__attribute__((swift_name("Bee")))
@protocol MainBee
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenMultiple")))
@interface MainGenMultiple : KotlinBase
- (instancetype)initWithArg:(id<MainHay>)arg __attribute__((swift_name("init(arg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<MainHay> arg __attribute__((swift_name("arg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenCollections")))
@interface MainGenCollections : KotlinBase
- (instancetype)initWithArg:(id _Nullable)arg coll:(NSArray<id> *)coll __attribute__((swift_name("init(arg:coll:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id _Nullable arg __attribute__((swift_name("arg")));
@property (readonly) NSArray<id> *coll __attribute__((swift_name("coll")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenCollectionsNonnull")))
@interface MainGenCollectionsNonnull : KotlinBase
- (instancetype)initWithArg:(id)arg coll:(NSArray<id> *)coll __attribute__((swift_name("init(arg:coll:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id arg __attribute__((swift_name("arg")));
@property (readonly) NSArray<id> *coll __attribute__((swift_name("coll")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoreTypes")))
@interface MainMoreTypes : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) MainGenCollectionsNonnull *ttt __attribute__((swift_name("ttt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpecificCollections")))
@interface MainSpecificCollections : KotlinBase
- (instancetype)initWithColl:(NSArray<MainSomeData *> *)coll __attribute__((swift_name("init(coll:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<MainSomeData *> *coll __attribute__((swift_name("coll")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenSpecificCollections")))
@interface MainGenSpecificCollections : KotlinBase
- (instancetype)initWithColl:(NSArray<MainGenNonNull *> *)coll __attribute__((swift_name("init(coll:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<MainGenNonNull *> *coll __attribute__((swift_name("coll")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenHolder")))
@interface MainGenHolder : KotlinBase
- (instancetype)initWithDataOpen:(MainGenOpen *)dataOpen dataNonNull:(MainGenNonNull *)dataNonNull __attribute__((swift_name("init(dataOpen:dataNonNull:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MainGenOpen *dataOpen __attribute__((swift_name("dataOpen")));
@property (readonly) MainGenNonNull *dataNonNull __attribute__((swift_name("dataNonNull")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenCeption")))
@interface MainGenCeption : KotlinBase
- (instancetype)initWithArg:(MainGenOpen *)arg __attribute__((swift_name("init(arg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MainGenOpen *arg __attribute__((swift_name("arg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleGenUse")))
@interface MainSimpleGenUse : KotlinBase
- (instancetype)initWithArg:(MainGenOpen *)arg __attribute__((swift_name("init(arg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MainGenOpen *arg __attribute__((swift_name("arg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleGenUseNonnull")))
@interface MainSimpleGenUseNonnull : KotlinBase
- (instancetype)initWithArg:(MainGenNonNull *)arg __attribute__((swift_name("init(arg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MainGenNonNull *arg __attribute__((swift_name("arg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SomeDataList")))
@interface MainSomeDataList : KotlinBase
- (instancetype)initWithListo:(NSArray<MainSomeData *> *)listo __attribute__((swift_name("init(listo:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<MainSomeData *> *listo __attribute__((swift_name("listo")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestData")))
@interface MainTestData : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)testData __attribute__((swift_name("init()")));
@property (readonly) NSArray<MainSomeData *> *listo __attribute__((swift_name("listo")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleInt")))
@interface MainSimpleInt : KotlinBase
- (instancetype)initWithArg:(int32_t)arg __attribute__((swift_name("init(arg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t arg __attribute__((swift_name("arg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleIntGen")))
@interface MainSimpleIntGen : KotlinBase
- (instancetype)initWithArg:(MainGenNonNull *)arg __attribute__((swift_name("init(arg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MainGenNonNull *arg __attribute__((swift_name("arg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleString")))
@interface MainSimpleString : KotlinBase
- (instancetype)initWithArg:(NSString *)arg __attribute__((swift_name("init(arg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *arg __attribute__((swift_name("arg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleStringGen")))
@interface MainSimpleStringGen : KotlinBase
- (instancetype)initWithArg:(MainGenNonNull *)arg __attribute__((swift_name("init(arg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MainGenNonNull *arg __attribute__((swift_name("arg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleStringGenNullable")))
@interface MainSimpleStringGenNullable : KotlinBase
- (instancetype)initWithArg:(MainGenOpen * _Nullable)arg __attribute__((swift_name("init(arg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MainGenOpen * _Nullable arg __attribute__((swift_name("arg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleMap")))
@interface MainSimpleMap : KotlinBase
- (instancetype)initWithMaparg:(NSDictionary<NSString *, MainSomeData *> *)maparg __attribute__((swift_name("init(maparg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSDictionary<NSString *, MainSomeData *> *maparg __attribute__((swift_name("maparg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleMapGen")))
@interface MainSimpleMapGen : KotlinBase
- (instancetype)initWithMaparg:(NSDictionary<NSString *, MainGenNonNull *> *)maparg __attribute__((swift_name("init(maparg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSDictionary<NSString *, MainGenNonNull *> *maparg __attribute__((swift_name("maparg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleSet")))
@interface MainSimpleSet : KotlinBase
- (instancetype)initWithMaparg:(NSSet<MainSomeData *> *)maparg __attribute__((swift_name("init(maparg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSSet<MainSomeData *> *maparg __attribute__((swift_name("maparg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleSetGen")))
@interface MainSimpleSetGen : KotlinBase
- (instancetype)initWithMaparg:(NSSet<MainGenNonNull *> *)maparg __attribute__((swift_name("init(maparg:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSSet<MainGenNonNull *> *maparg __attribute__((swift_name("maparg")));
@end;

__attribute__((swift_name("LiveData")))
@interface MainLiveData : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MainLiveData *)mapFunction:(id (^)(id))function __attribute__((swift_name("map(function:)")));
- (MainLiveData *)flatMapFunction:(MainLiveData *(^)(id))function __attribute__((swift_name("flatMap(function:)")));
- (void)addObserverObserver:(MainKotlinUnit *(^)(id _Nullable))observer __attribute__((swift_name("addObserver(observer:)")));
- (void)removeObserverObserver:(MainKotlinUnit *(^)(id _Nullable))observer __attribute__((swift_name("removeObserver(observer:)")));
@property (readonly) id value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("State")))
@interface MainState : KotlinBase
- (BOOL)isLoading __attribute__((swift_name("isLoading()")));
- (BOOL)isSuccess __attribute__((swift_name("isSuccess()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isError __attribute__((swift_name("isError()")));
- (id _Nullable)dataValue __attribute__((swift_name("dataValue()")));
- (id _Nullable)errorValue __attribute__((swift_name("errorValue()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.Data")))
@interface MainStateData : MainState
- (instancetype)initWithData:(id)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (id)component1 __attribute__((swift_name("component1()")));
- (MainStateData *)doCopyData:(id)data __attribute__((swift_name("doCopy(data:)")));
@property (readonly) id data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.Error")))
@interface MainStateError : MainState
- (instancetype)initWithError:(id)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (id)component1 __attribute__((swift_name("component1()")));
- (MainStateError *)doCopyError:(id)error __attribute__((swift_name("doCopy(error:)")));
@property (readonly) id error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.Loading")))
@interface MainStateLoading : MainState
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State.Empty")))
@interface MainStateEmpty : MainState
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShowTypes")))
@interface MainShowTypes : KotlinBase
- (instancetype)initWithState:(MainLiveData *)state __attribute__((swift_name("init(state:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MainLiveData *state __attribute__((swift_name("state")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleGeneric")))
@interface MainSimpleGeneric : KotlinBase
- (instancetype)initWithTarg:(id _Nullable)targ __attribute__((swift_name("init(targ:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)myArg __attribute__((swift_name("myArg()")));
@end;

__attribute__((swift_name("SomeInterface")))
@protocol MainSomeInterface
@required
- (BOOL)what __attribute__((swift_name("what()")));
- (void)ok __attribute__((swift_name("ok()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenericConstraintsKt")))
@interface MainGenericConstraintsKt : KotlinBase
+ (void)starGenericArg:(MainGenNonNull *)arg __attribute__((swift_name("starGeneric(arg:)")));
+ (void)variOutCasting __attribute__((swift_name("variOutCasting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogicStuffKt")))
@interface MainLogicStuffKt : KotlinBase
+ (int32_t)runSomeStuffGen:(MainGenNonNull *)gen __attribute__((swift_name("runSomeStuff(gen:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MainKotlinUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

NS_ASSUME_NONNULL_END
