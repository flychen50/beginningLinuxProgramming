#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main( ){
  printf("Runnning ps with execlp-------------------------------------------------------------");
  execlp( "ps","ps","ax",0 );
  printf( "Done .\n" );
  exit( 0 );  

}
