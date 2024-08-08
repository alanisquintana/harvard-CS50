#include <stdio.h>
#include <cs50.h>

int main ( void )
{
    int xValue = get_int ( "What's x? " );
    int yValue = get_int ( "What's y? " );

    if ( xValue < yValue )
    {
        printf ( "x is less than y\n" );
    }
    else if ( xValue > yValue )
    {
        printf ( "x is greater than y\n" );
    }
    else
    {
        printf ( "x is equal to y\n" );
    }
}
