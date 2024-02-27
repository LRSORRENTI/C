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
    // that num
    printf("\n %0.15lf", faveNum);
    int age = 23;
    printf("\n %d", age);

    
    
    
    return 0;
}