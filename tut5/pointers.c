#include <stdio.h>
#include <stdlib.h>

int main(){

   int n;
   int * p;
   int * q;
   double x;
   double * r;

   p = &n;
   *p = 5;
   *q = 17;
   q = p;
   *q = 8;
   r = &x;
   *r = 3.0;
   *p = *r;
   p = r;
   *p = n;
   n = x;


   return 0;

}
