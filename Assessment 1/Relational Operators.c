
//Relational operators

#include <stdio.h>

int main() {

   int a = 5;
   int b = 10;
   int c ;

   if( a == b ) {
      printf("a is equal to b\n" );
   } else {
      printf("a is not equal to b\n" );
   }
	
   if ( a < b ) {
      printf("a is less than b\n" );
   } else {
      printf("a is not less than b\n" );
   }
	
   if ( a > b ) {
      printf("a is greater than b\n" );
   } else {
      printf("a is not greater than b\n" );
   }
   
  
   a = 5;
   b = 20;
	
   if ( a <= b ) {
      printf("a is either less than or equal to  b\n" );
   }
	
   if ( b >= a ) {
      printf("b is either greater than  or equal to b\n" );
   }
}