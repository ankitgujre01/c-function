#include<stdio.h>
// double subtract(double a, double b){
//     double sub = a-b;
//     return sub;
// }
voud subtract(int a, int b){
    int sub = a-b;
    printf("The subtraction of %d and %d is %d", a, b, sub);
    return;
}
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    int result = subtract(a, b);
    printf("The subtraction of %d and %d is %lf", a, b, result);
    return 0;
}
// Output: Enter two numbers: 10 5
//         The subtraction of 10.000000 and 5.000000 is 5.000000
// Explanation: In this code snippet, we have created a function subtract() that takes two double type arguments and returns the subtraction of the two numbers. In the main function, we take two double type inputs from the user and call the subtract() function to get the result. Finally, we print the result using the printf() function. The output will be the subtraction of the two numbers entered by the user.
