#include <stdio.h>
#include <locale.h>
 
int main()
{
    setlocale(LC_ALL, "rus");
    int x,y,z;
    scanf("%i %i %i", &x, &y, &z);
    if(x == -y)
        printf("%i", z);
    else if(x == -z)
        printf("%i", y);
    else if(y == -z)
        printf("%i", x);
    else
        printf("Нет");
}
