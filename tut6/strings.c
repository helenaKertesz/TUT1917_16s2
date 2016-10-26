#include <stdio.h>
#include <string.h>

int strLen( char * word );
void reverseString( char * word );
void subStr( char s[], char d[], int lo, int hi);
char * strStr( char * haystack, char  * needle);
int isPalindrome( char  * word);

int main(){

   char word1[] = "CATS";
   char word2[] = "dogs!";
   char word3[] = "hannah";
   char word4[] = "civic";

   char subWord[5];

   printf("%s is %d charcters long\n", word1, strLen( word1 ));
   printf("%s is %d charcters long\n", word2, strLen( word2 ));

   //subStr( word1, subWord, 1, 2);
   //printf("%s\n", subWord );

   //reverseString( word1 );
   //reverseString( word2 );

   printf("%s - %d\n", word2, isPalindrome( word2 ));
   printf("%s - %d\n", word3, isPalindrome( word3 ));
   printf("%s - %d\n", word4, isPalindrome( word4 ));

   printf("%s\n", word1);
   printf("%s\n", word2);


   return 0;
}

// This function is the equivalent of strlen() found in string.h
int strLen( char * word ){
   int i = 0;
   while( word[i]  != '\0'){
      i++;
   }

   return i;
}


// Thsi function reverses a string "in place" (ie without making a new string)
void reverseString( char * word ){

   int length = strlen(word);
   int i = 0;
   int a ;
   while( i < length/2){
      a = word[i];
      word[i] = word[length -i];
      word[length - i] = a;
      i++;
   }
}
//This function find if a string is a palindrome
// (assuming all lowercase with no punctuation or whitespace
int isPalindrome( char  * word){

   int len = 0;
   int lenHalf = 0;
   int i = 0;

   len = strlen(word);
   lenHalf = len/2;

   while( i < lenHalf ) {
      if( word[i] == word[len-i] ) {
         i++;
      } else {
         i = len;
      }
   }

   if( i == lenHalf + 1 ) {
      return 1;
   } else {
      return 0;
   }

}

void subStr( char s[], char d[], int lo, int hi){
   int counter, nCounter = 0;


   for (counter = lo; counter <= hi; counter++, nCounter++){
      d[nCounter] = s[counter];
   }
   d[nCounter] = '\0';


}

// This function is equivalent to strstr() found in string.h
char * strStr( char * haystack, char  * needle){

   return NULL;
}




/*int strLen( char * word ){
   int i = 0;
   while( word[i] != '\0' ){
      i++;
   }
   return i;
}*/
