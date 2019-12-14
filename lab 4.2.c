#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int n,i;
    scanf("%i", &n);
    int arr[1024];
    int sr = 0;
    for(i=0; i<n; i++)
    {
        scanf("%i", &arr[i]);
        sr += arr[i];
    }
    sr /= n;
    int ans = 0;
    for(i=0; i<n; i++)
    {
        if(abs(arr[i]-sr) <= 3)
            ans++;
    }
 
    printf("%i", ans);
}
