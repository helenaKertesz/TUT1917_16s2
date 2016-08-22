//This prgram needs comments!!!
//At the very least a header comment and a comment for each function decribing what it does :)

#include <stdio.h>

int encode(int ch, int shift);
int rotate_right(int ch);
int rotate_left(int ch);

int main(void){

   char  ch=0;
   int shift=0;

   printf("Enter Shift: ");
   scanf("%d", &shift);
   printf("Enter text: \n");

   while((ch=getchar()) != EOF) {
      putchar(encode(ch,shift));

   }

   return 0;

}


int  encode( int ch, int shift){

   int i=1;
   int rotated=0;

   if (shift>0){
      while(i<=shift){
         ch = rotate_right(ch);
         i++;
      }
   } else if (shift<0){
      while(i<=(-1*shift)){
         ch=rotate_left(ch);
         i++;
      }
   }// else { <-  this empty else is not needed

   //}
   return ch;

}





int rotate_right(int ch){

   int rotated=0;

   if((ch>=65)&&(ch<=90)){ // PLease put in some spaces -  ie) (ch >= 65), makes it easier to read
      // this was originally statement & statement -> needs to be &&  not & (have changed for all the if statements)

      if(ch==90){
         rotated=ch-25;
      } else {
         rotated=ch+1;
      }

   } else if((ch>=97)&&(ch<=122)){

      if(ch==122){
         rotated=ch-25;
      } else {
         rotated=ch+1;
      }

   } else if((ch>=32)&&(ch<=64)){
      rotated=ch;
   }


   return rotated;
}

int rotate_left(int ch){

   int rotated=0;

   if((ch>=65)&&(ch<=90)){
      if(ch==65){
         rotated=ch+25;
      } else {
         rotated=ch-1;
      }
   } else if((ch>=97)&&(ch<=122)){
      if(ch==97){
         rotated=ch+25;
      } else {
         rotated=ch-1;
      }
   } else if((ch>=32)&&(ch<=64)){
      rotated=ch;
   }

   return rotated;

}
