#include <stdio.h>
#include <math.h>
 
 
int main()
{
    float x, y, z;
    x = 14.26;
    y = -1.22;
    z = 0.035;
    printf("%f\n", (2*cos(x - 2/3)));
    printf("%f\n", (1/2 + sin(y)*sin(y)));
    printf("%f\n", (1 + (z*z)/(3 - (z*z)/5)));
    float a = ((2*cos(x - (float)2/3)) / (0.5 + sin(y)*sin(y)));
    float b = (1 + ((z*z)/(3 - (z*z)/5)));
    float s = a*b;
    printf("%.6f", s);
}
