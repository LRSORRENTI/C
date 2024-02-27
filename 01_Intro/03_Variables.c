//  VARIABLES IN C
#include <stdio.h>

int main() {
    // variables are allocated space in memory to store a value
    // A variable always needs a type declaration
    int x;
    x = 123;
    int y = 321; // Declaration and initialization
    int age = 22;
    int year = 2024;
    float fltNum = 2.1;
    char grade = 'B';
    // To store a string of chars, you need to pass 
    // the array type postfixed to the variable name
    char name[] = "Luke";
    printf("%s is %d years old", name, age);
    printf("\n Your average grade is %c", grade);
    // Luke is 22 years old
    // Your average grade is B
    printf("Your gpa is %f", fltNum);
    return 0;
}
// LEFT OFF @ 25:28