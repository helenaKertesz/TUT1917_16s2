/*
 * This program explores and discusses arrays and strings :)
 * written by Helena Kertesz
 * 06/04/2016
 * compile with gcc-o arrays arrays.c (it's bad but it means it should complile on both you home computer and on cse)
 * There are questions for you to answer next to some lines in the code to test your knowledge (some are quite tricky). Answers are down the bottom.
 * Don't worry about the BLUE, RED and RESET - I'm just doing it to make the printout pretty, it's not from this course.
 *
 * Try and answer all the questions before looking at the answers (compile and run the program for help).
 * Bonus challenge: try and answer all/most of the questions without compiling and running the program.
 */


#include<stdio.h>
#include<string.h>

//you don't need to worry about these #define or when I have BLUE, RED and RESET in printf's
//(unless you want to learn how to colour your outputs - in which case feel free to send me an email / look it up online)
#define BLUE    "\x1b[34m"
#define RED     "\x1b[31m"
#define RESET   "\x1b[0m"

void printIntArray(int array[], int size);
void catsCatsCats (int array[]);
void printString(char * string);
void badPrint(char * string);

int main(){

    int a[10] =  {0}; //initialise an array "a" containing 10 integers and set everything to 0.
    printf(BLUE "\nint a[10] = {0};\n" RESET);

    printf("a[0] is %d\n", a[0]);           //Q1: what value will this be and why?
    printf("a[10] is %d\n", a[10]);         //Q2: what value will this be and why? (try running the program a few times and see if it's the same each time)

    int b[10];                              //create array "b" containing 10 integers. Values are uninitialised.
    printf(BLUE "\nint b[10] (note: values uninitialied)\n" RESET);

    printf("b[0] is %d\n", b[0]);                                           // Q3: what value will this be and why?
    printf("b = %p, &b[0] %p\n", b, &b[0]);                                 // Q4: a) what is being printed, b) will the two values be the same?
    printf("sizeof(b[0]) = %lu\n", sizeof(b[0]));                           // Q5: What will this print? (ie. what is the size of each element in the array?)
    printf("&b[1] = %p, &b[2 = %p, &b[3] = %p\n",  &b[1], &b[2], &b[3]);
        //Q6: a) what will the spacing between these pointers be? (clue: this carries on from the previous question).
        //    b) What does this tell you about how an array is stored in memory?

    int c[5] = {4 ,8 ,2 ,6 ,0 }; //initialise an array with 5 integers.
    printf(BLUE "\nint c[5] = {4 ,8 ,2 ,6 ,0 }\n" RESET);

    int size = sizeof(c)/sizeof(c[0]);  // Q7: What is being calculated here? Why am I dividing by sizeof(c[0])?
    printf("size = %d\n", size);
    printf("printing the array using printIntArray\n");
    printIntArray( c , size );          // Q8: What am I passing to this function?
    catsCatsCats( c );                  // Q9: What am I passing to this function? Why is this a bad idea? (Q10 is next to the function)

    printf( BLUE "\nLETS PLAY WITH STRINGS!!\n" RESET ); // a string is simply an array of characters, but there are a few equivalent ways of playing with them.

    printf("\n\\0 = %d and EOF = %d\n\n", '\0', EOF);           // Q11: What values will these print? What are these used for?

    char foo[] = {'c', 'a', 't', 's', '\0'};                    //Initialise an array of characters "foo" and set the first five elements. Note I set no size of the array.
    printf(BLUE "char foo[] = {'c', 'a', 't', 's', '\\0'};\n" RESET );

    printf("foo[3] = %c\n", foo[3]);                            // Q12: What will this print? (remembering that the first element is foo[0] not foo[1])?
    printf("foo[4] = char '%c' = int '%d'\n", foo[4], foo[4]);  // Q13: What will this print? What are the purposes of these characters?
    printf("printing out foo as a string gives: %s\n", foo);    // Q14: What will this print? (note the %s format specifier) Think about how the printout knows when to stop.
    printString(foo);                                           // Have a look at this function. It shows how printing a string works.
                                                                // Think about why I can get away with not giving it the size of the array (as I had to do with the int arrays).


    char * bar = "cats";
    printf( BLUE "\nchar * bar = \"cats\"\n" RESET );           // FUN FACT: to print out the " you must put a \ before it (the same thing goes for printing out \ on line 57)

    printf("printing bar as a string gives: %s\n", bar);
    printString(bar);
    printf("bar[4] = %d\n", bar[4]);                            //Q15: What will this print? Why?
    printf("strcmp(foo, bar) returns %d\n", strcmp(foo, bar));  //Q16: What will this return and why (use "man strcmp" if unsure)?

    // I've made all the print out from badPrint red to help  you see it.
    // Q17: What one mistake in this function makes the printout so funky?
    //   hint: compare it with printString.
    // Q18: EXTENSION (which means I'll only give you the answer if you email me - try and figure it out on your own).
    // Why does badPrint behave differently for foo and bar?
    //   hint: google where strings are  stored when they are given something in quotation marks (ie "cats") which can't be changed. Try to change some character bar[n] and foo[n].

    printf("\nprinting bar using badPrint\n");
    badPrint(bar);
    printf("\n");

    // Only uncomment the next three lines if you want to do Q18 EXTENTION or just try it out. Run it serval times to see if it changes. This may cause a seg fault (or may not).
    // printf("\nprinting foo using badPrint (must uncomment)\n");
    // badPrint(foo);
    // printf("\n");

    return 0;
}

//this function prints out an array given a pointer to it and  the size of the array. Make sure it makes sense to you.
void printIntArray( int array[], int size){
    int i = 0;
    while(i <= size - 1){
        printf("array[%d] is %d\n", i, array[i]);
        i++;
    }
}


//This function takes an array and changes the 3rd element to 3, the 5th element to 5 and the 7th element to 7.
void catsCatsCats(int array[]){
    array[2] = 3;
    array[4] = 5;
    array[6] = 7; // Q10: Why is this potentialy REALLY bad? How would you change this function to fix this?
}

//This function prints an array of characters.
void printString(char * string){
    int n = 0;
    while(string[n] != '\0'){
        printf("'%c' ", string[n]);
        n++;
    }
    printf("\n");
}

void badPrint(char * string){
    int n = 0;
    while(string[n] != EOF){
        printf( RED "%c" RESET, string[n]); //ignore RED and RESET (I'm just making the printout red for you to see)
        n++;
    }
}

/*ANSWERS
 * 1. will be zero because each value in the array is initialied to zero.
 *
 * 2. Will be junk (whatever was at the memory address set aside for this array). This is because a[10] is NOT an element of the initialied array.
 *    The 10 elements are a[0], a[1], a[2], a[3]... a[9]. Thus, the last element of an array delcared as a[n] (n elements) will be  a[n-1], because we start from a[0].
 *
 * 3. This depends on your version of gcc. Newer versions (such as on the cse machines) will automatically set all elements to zero, so this will print out zero.
 *    However, older version will print junk, since the values in the array were not initialised.
 *    The junk will be whatever was already in the section of memory that was set aside for this array.
 *
 * 4. a) a pointer the the first element in the array b) yes. b is a pointer the the first element (the name of an array on its own always is) and &b[0] finds the integer
 * (since this is an integer array) stored at the first element in the array and then uses & to find out where this int is stored
 * - again giving the memory adress of the first element of the array
 *
 * 5. Each element of this particular array is an integer. Therefore sizeof( b[n] ) = sizeof( int ) = 4 or 8 depending on your system.
 *
 * 6. a) Each pointer is 4 bytes after the one before. This is becaus the size of an int is 4 bytes and this is an array of integers.
 *    b) elements of an array are stored sequentially in memory (this means you can traverse arrays using pointer arithmatic - NOT something you need in
 *       this course but fun to know)
 *
 * 7. This calculates the number of items in the array. (take the amount of memory set aside for the array (size of array) and divide it by the size of each element).
 *
 * 8. Passing a pointer to an array and the number of elements in the array.
 *
 * 9. By only passing the pointer to the array the function could try and use elements that don't exist. This is called overflow, and can be used to overwrite different
 *    points in memory - which is a security risk!!! Never write a function that gets passed an array without specifying its size.
 *
 * 10. This is an example of overflow. The array passed to this function only has five elements but the function doesn't know this, and calls array[6]
 *     , overwriting a point in memory somewhere after the array. In this case it shouldn't do anything horrible, but this can be exploited. To fix this, always pass the
 *     size of an array along with the pointer to an array, such as for the printIntArray function.
 *
 * 11. EOF will print -1. This character is used to declare the end of a file (hence EOF). \0 will return 0. It is used to declar the end of a string.
 *
 * 12. This will print 's' - the 4th element in the array.
 *
 * 13. This will print char '' and int '0'. This is because foo[4] is '\0'.
 *
 * 14. This will print "cats". when you use %s it will stop when it gets to '\0'
 *
 * 15. This will print 0. When you initialise a string using a word in quotation maarks (ie "cats") it automatically adds a '\0' to the end.
 *     Thus bar[4] (one past the last element in the string) is '\0', which prints to integer 0.
 *
 * 16. This will return 0, telling you that foo and bar are the same.
 *     Thus the delcalarations char foo[] = {'c','a','t','s','\0'} and char * bar = "cats" are equivalent and  produce identical strings.
 *     (although those who have a look at Q18 will see  that there are some differences)
 *
 * 17. The function runs while string[n] != EOF -> if should be while string[n] != '\0' because '\0' is what marks the end of a string.
 *     Thus it will overflow and print whatever is the memory after where te string is stored until it comes across an EOF.
 *     In this case it prints the text  in the printf's from this program (which is pretty cool).
 */
