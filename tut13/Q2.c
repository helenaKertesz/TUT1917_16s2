#include <stdio.h>
#include <stdlib.h>

#define LENGTH 7

int main(){
   int nums1[LENGTH] = { 1, -5, 2, 0, 4, 2, -3 };
   int nums2[LENGTH] = { 1, -5, 2, 4, 4, 2, 7 };
   int result = 0;
   int j = 0;
   while (j < LENGTH) {
      if (nums1[j] != nums2[j]) {
         result = result + 1;
      }
      j = j + 1;
   }

   printf("result = %d\n", result);
   return 0;
}
