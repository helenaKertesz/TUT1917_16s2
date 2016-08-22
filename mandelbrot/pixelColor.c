
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "pixelColor.h"


unsigned char stepsToRed (int steps){
   int red;
   
   red = sin((int)steps)*255;
   
   return red;
}

unsigned char stepsToBlue (int steps){
   int blue;
   
   blue = cos((int)steps)*255;
   return blue;
}

unsigned char stepsToGreen (int steps){
   int green;
   
   green = ((int)pow((double)steps,(double)255)) % steps;
   
   return green;
}
