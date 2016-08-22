/*
 * This program explores calling and using functions
 * Written by Helena Kertesz
 *
 */


// These are the function prototypes
// They tell the compiler the names of all the fuctions youo've created their inputs & output
int addNumbers( int a, int b );
int divideNumbers( int a, int b);

int main(){

   int a = 5;
   int b = 10;

   int c = addNumber( a, b ); // when the compiler gets to this line in the code, the reason it doesn't freak out and say
                              // that there's an "undefined reference" to addNumber is becaue it was declared at the start.
   d = divideNumber( d, a );

   return 0;
}

// When this function is called a new "stack frame" (essentially a chunch of memory) is created in which
int addNumbers( int a, int b ){
   sum = a + b;
   return sum;
}


// Why is this function not going to be very accurate with dividing number?
int divideNumbers( int a, int b){
   return a/b;                      // You can return an expression, but some consider it bad practise as it is less readable.
}
