#include <stdio.h>
#include <stdlib.h>

int main( ){
  printf("Runnning ps with system");
  system( "ps ax &" );
  printf( "Done .\n" );
  exit( 0 );  

}
