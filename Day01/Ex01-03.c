#include <stdio.h>

int x, y;

int main( void )
{
   for ( x = 0; x < 100; x++, printf( "\n" ) )
       for ( y = 0; y < 100; y++ )
           printf( "X" );

  return 0;
}


