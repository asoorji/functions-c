/* Online C Compiler and Editor */
#include <stdio.h>

double multiply(){
    double first, second, result;
    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);
    result = first * second;
    printf("The answer is %lf", result);

}

int main()
{


 multiply();
 
    return 0;
}

