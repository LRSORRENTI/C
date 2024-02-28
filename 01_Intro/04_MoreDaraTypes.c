// More on data types in C 

#include <stdio.h>
#include <stdbool.h>

int main() {
    
    // char denotes a single character, 
    // use %c for string template literal
    char a = 'C';
    // array of characters use a bracket postfixed to the 
    // variable name, use %s for string templates
    char name[] = "Chris";
    char last[] = "Davemport";
    printf("name is %s %s", name, last);
    // floating point nums prefix float, and use %f
    // for string template literal, floats can only store 
    // 6 - 7 digits
    float pi = 3.1415;
    printf("\n pi is %f", pi);
    // To specify very floats that have more than 7, use 
    // doubles, doubles use %lf to string template
    double faveNum = 12.1212121212121212;
    // use 0.totalDigits in the print statement to show 
    // that num, also a double uses 8 bytes of memory, where 
    // a regular float uses 4 bytes
    printf("\n %0.15lf", faveNum);
    int age = 23;
    printf("\n %d", age);

    // Booleans in C, to use booleans you'll need to 
    // import the standard boolean library <stdbool.h>

    bool notCool = false;
    bool cool = true;
    printf("\n not cool is false and false in c is represented by a %d", notCool);
    printf("\n cool is true and true in c is represented by a %d", cool);

    // To specify very long integers use long long 
    // specifier, these long longs use 8 bytes of memory
    long long int myNum = 123456789101112131;
    // for unsigned use %lld
    printf("\n Long long %lld \n", myNum);
    // for signed long long use %llu
    unsigned long long int newInt = 11234567891011121316U;
    printf("\n signed long long int %llu \n", newInt);
    return 0;
}