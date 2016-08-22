/*
 * This program taken a file from stdin and prints out the frequency of each letter
 * in a pretty graph :)
 *
 * Written by Helena Kertesz
 *
 */
#include<stdio.h>
#include<ctype.h>
#include"letterFreq.h"


//fill a 26 element array with the freqency of each letter in a given file
//(read in from stdin)
void frequency( double freq[ALPHALEN] )
{
    char ch;
    while((ch = getchar()) != EOF){
		if(isalpha(ch)){
			freq[ (toupper(ch) - 'A') ]++;
		}
	}
}


//given a array of frequency of letters returns the index of the most frequent
int mostFrequent( double freq[ALPHALEN] )
{
	int i = 0;
	int most = 0;

	while( i < ALPHALEN ){
		if( freq[i] > freq[most]){
			most = i;
		}
		i++;
	}

	printf("most frequent letter is %c with %.0f occurances\n", 'a' + most, freq[most]);

    return most;
}

//Prints out a bar chart of freqency of letters, given an array with this information
//and the index  of the most frequent letter.
void printGraph( double freq[ALPHALEN], int most )
{
	int i = 0;
	char letter = 'a';
	double n;
    double graphLen = GRAPHLEN;
	double increment = freq[most]/graphLen;

	printf("increment is %f\n", increment);

	while( i < ALPHALEN ){
		printf("%c - %5.0f | ", letter, freq[i]);
		for(n = 0; n < freq[i] ; (n = n + increment)){
			printf("*");
		}
		printf("\n");
		letter++;
		i++;
	}
}

//fills an array with the rank of letter (1 being most frequent, 26  being least)
void rank( double freq[ALPHALEN], int rank[ALPHALEN] ){
    //I feel like there should bee stuff here...
}
