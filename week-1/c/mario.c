#include <stdio.h>
#include <cs50.h>

int main ( void )
{
    // Visual resource in reference to the game Super Mario Bros.
    for ( int i = 0; i < 4; i++ )
    {
        printf ( "?" );
    }
    printf ( "\n" );

    // Prompts the user for a positive integer
    int blockHeight;
    int blockWidth;

    do {
        blockHeight = get_int ( "What height do you want the block to be? " );
    }
    while ( blockHeight < 1 );

    do {
        blockWidth = get_int ( "And what width do you want the block to be? " );
    }
    while ( blockWidth < 1 );

    // Print the block
    for ( int i = 0; i < blockHeight; i++ )
    {
        for ( int j = 0; j < blockWidth; j++ )
        {
            printf( "#" );
        }
        printf ( "\n" );
    }
}
