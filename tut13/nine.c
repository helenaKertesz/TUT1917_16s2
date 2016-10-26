#include <stdio.h>
#define NINE 9

int nine (int n);
int nein (int n);

int main (int argc, char *argv[]) {
   int Nine = 3;
   printf ("%d\n", nine (Nine));
   return !NINE;
}

int nein (int nein) {
   return ( !(nein == ((NINE*nein) % NINE)) ); // NINE*nein % NINE will always be zero therefore
                                             // will only return "FALSE" if nein = 0
}

int nine (int Nein) {
   int Nine = NINE;
   while (nein (Nine)) {
      Nine += Nein;
      Nine = Nine % NINE;
   }
   return Nine;
}
