#include<stdio.h>
#include<ctype.h>
#include"letterFreq.h"

int main (void){

	double freq[ALPHALEN] = {0};
    int most;

    frequency( freq );

    most = mostFrequent( freq );

    printGraph( freq, most );

	return(0);
}
