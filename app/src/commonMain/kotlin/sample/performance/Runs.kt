package sample.performance

fun runMany()
{
    val start = myTime()
    for(i in 0 until 1_000_000){
        oneMil(i)
    }

    println("Total: ${myTime() - start}")
}

private fun oneMil(runCount: Int) {
    val l = ArrayList<Adata>(10)
    for (i in 0 until 10) {
        l.add(Adata("i $i", i))
    }

    if(runCount % 100_000 == 0)
    println("run $runCount")
}

expect fun myTime():Long

//        l.add(Adata("iii", i))