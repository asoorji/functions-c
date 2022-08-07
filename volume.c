/* Online C Compiler and Editor */
#include <stdio.h>
#include<math.h>

double cylinder(){
    double radius, height, volume;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    printf("Enter height: ");
    scanf("%lf", &height);
    volume = (2 * M_PI * radius * height) + (2 * M_PI * pow(radius,2));
    printf("The volume is %lf", volume);
}

int main()
{
    cylinder();

    return 0;
}
