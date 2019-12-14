#include <stdio.h>
#include <locale.h>
 
int main ()
{
    int n,i;
    scanf("%i", &n);
    int arr[1024];
    int brr[1024];
    int prr[1024];
    int n1 = 0;
    int n2 = 0;
    for(i=0; i<n; i++)
    {
        scanf("%i", &arr[i]);
        if(arr[i] < 0)
            brr[n1++] = arr[i];
        else
            prr[n2++] = arr[i];
    }
 
 
    for(i=0; i<n; i++)
        printf("%i ", arr[i]);
    printf("\n");
 
    for(i=0; i<n1; i++)
        arr[i] = brr[i];
 
    for(int i=0; i<n2; i++)
        arr[i+n1] = prr[i];
 
    for(int i=0; i<n; i++)
        printf("%i ", arr[i]);
 
 
}
