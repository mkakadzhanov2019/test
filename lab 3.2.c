#include <stdio.h>
#include <locale.h>
 
int main ()
{
    int n=1000,k=0,i,j;
    scanf("%i", &n);
    for (i=0; i*i*i<=n-1; i++)
        for (j=i; j*j*j<=n-1; j++)
            if (i*i*i+j*j*j==n)
                   k++;
   printf ("%i",k);
   return 0;
}
