#include <stdio.h>
#include <stdlib.h>
int (abs_xf )( int i){
  return ( ( i<0 )?-i:i );
}

int main(){
  printf( "%d",abs_xf( -5 ) );
}










