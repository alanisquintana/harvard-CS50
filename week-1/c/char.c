#include <stdio.h>
#include <cs50.h>

int main( void )
{
    char userConsent = get_char( "Do you agree? y/n: " );

    if ( userConsent ==  'y' || userConsent ==  'Y' )
    {
        printf ( "Agreed.\n" );
    }
    else if ( userConsent ==  'x' || userConsent ==  'X' )
    {
        printf ( "Not agreed.\n" );
    }
}
