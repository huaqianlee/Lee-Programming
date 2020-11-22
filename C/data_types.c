/*
 * Sample Input
 * 12
 * 4.0
 * is the best place to learn and practice coding!
 * 
 * Sample Output
 * 16
 * 8.0
 * HackerRank is the best place to learn and practice coding!
 *
 * 
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int input_int;
    double input_double;
    char input_string[105] = " ";
    // Read and save an integer, double, and String to your variables.
    //scanf("%d, %lf, %[^\n]s", &input_int, &input_double, input_string);
    scanf("%d", &input_int);
    scanf("%lf", &input_double);
    while(getchar() != '\n');
    //fflush(stdin);
    scanf("%[^\n]s", input_string);
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + input_int);
    // Print the sum of the double variables on a new line.
    printf("%0.1lf\n", d + input_double);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    //printf("%s\n",strcat(s, input_string));
    printf("%s%s\n", s, input_string);

    return 0;
}
