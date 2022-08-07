#include<stdio.h>
#include<math.h>


double cylinder(){
    double  r, h, A, area;
    printf("\nradius = ");
    scanf("%lf", &r);
    printf("\nheight = ");
    scanf("%lf", &h);
    area = (2 * M_PI * r * h) + (2 * M_PI * pow(r,2));
    printf("\nSurface area of the cylinder = %lf", A);
}

int main(){
     cylinder();
     return 0;
}



