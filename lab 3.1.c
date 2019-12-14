#include <stdio.h>
#include <locale.h>
 
int main()
{
    setlocale(LC_ALL, "rus");
    float s = 0;
    int n = 1;
    while(s < 5)
    {
        s += (float)1/n;
        n++;
    }
    printf("%i", n);
}
