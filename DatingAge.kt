import java.util.*

fun main( vararg args: String ) {
    print( "hello please enter your age: " )

    val reader = Scanner( System.`in` )
    val localAge = reader.nextInt( )
    val lowestAcceptableAge = localAge / 2 + 7
    val maxAcceptableAge = ( localAge - 7 ) * 2
    if ( localAge > 12 )
        println( "the socially acceptable age range you can date in is: $lowestAcceptableAge to $maxAcceptableAge" )
    else
        println( "you should not be dating buddy..." )
}
