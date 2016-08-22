#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int j, r, nloops;
    unsigned int seed;

    //if (argc != 3) {
    //    fprintf(stderr, "Usage: %s <seed> <nloops>\n", argv[0]);
    //    exit(EXIT_FAILURE);
    //}

    if( argc >= 2 ) seed = atoi(argv[1]);
    else {
        ///generate a random number from the system time
        struct tm *tm;
        time_t now;
        now = time(0);
        if ((tm = localtime (&now)) == NULL) {
            printf ("Error extracting time stuff\n");
        }
        seed = tm->tm_sec;
        printf("seed = %d\n", seed);
    }

    if( argc >= 3 ) nloops = atoi(argv[2]);
    else nloops = 1;


    srand(seed);
    for (j = 0; j < nloops; j++) {
        r =  rand();
        printf("%d\n", r);
    }

    exit(EXIT_SUCCESS);
}
