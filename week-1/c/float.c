#include <stdio.h>
#include <cs50.h>

int main ( void )
{
    int x = get_int ( "Enter a number: " );
    int y =  get_int ( "Enter another number: " );

    float result = ( float ) x / ( float ) y;
    printf ( "The result of the division is: %.1f\n", result );
}
