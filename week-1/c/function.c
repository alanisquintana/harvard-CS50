#include <stdio.h>

int main ( void )
{
    void meow ( int n );

    meow(3);
}

void meow ( int n )
{
    int i;
    
    for ( i = 0; i < n; i++ )
    {
        printf( "Meow\n" );
    }
}
