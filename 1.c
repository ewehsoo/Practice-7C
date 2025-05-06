#include <stdio.h>
#include <string.h>

int max( int a, int b ){
 if(a > b){
  return a;
 }
 else{
  return b; 
 }
}

int main(){
 int c = max( 3, 7 );
 printf( "Максимальное число: %d\n", c );
 return 0;
}
