#include <stdio.h>
#include <cs50.h>

int main ( void )
{
    int add ( int a, int b );

    int x = get_int ( "Enter a number: " );
    int y =  get_int ( "Enter another number: " );

    printf ( "The result of the sum is: %i\n", add( x, y ) );
}

int add ( int a, int b )
{
    return a + b;
}
