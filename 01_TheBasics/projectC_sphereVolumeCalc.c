#include <stdio.h>
#include <math.h>

int main()  {
    double pi = 3.141592653;
    double radius = 0.0f;
    double result = 0.0;
    
    printf("---Welcome to the sphere volume calculator!---\n");
    printf("Insert the radius: ");
    scanf("%lf", &radius);

    result = 4.0 / 3.0 * pi * pow(radius, 3);
    printf("The sphere volume is: %.2lf", result);
    return 0;
}

/*
Division works differently in C,
therefore whenever you want to divide,
atleast involve a floating point number
*/