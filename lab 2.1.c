#include <stdio.h>
#include <math.h>
 
 
int main()
{
    float x, y;
    scanf("%f %f", &x, &y);
    if((float)sqrt(x*x + y*y) > 1.0)
        printf("No");
    else
        printf("Yes");
 
}

