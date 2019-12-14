#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n;
    int i,j;
    scanf("%i", &n);
    int** arr = (int**)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        arr[i] = (int*)malloc(n*sizeof(int));
    }
    int sum = 0;
    for(i=0; i<n; i++)
    {
        sum = 0;
        for(j=0; j<n; j++)
        {
            scanf("%i", &arr[i][j]);
            sum += arr[i][j];
        }
    }
 
    int diag=0;
    for(int i=0; i<n; i++)
    {
        diag += arr[i][i];
        int t = 0;
        for(int j=0; j<n; j++)
        {
            t += arr[i][j];
        }
        if(t != sum)
        {
            printf("No");
            return 0;
        }
        t=0;
        for(int j=0; j<n; j++)
        {
            t += arr[j][i];
        }
        if(t != sum)
        {
            printf("No");
            return 0;
        }
    }
 
    if(diag != sum)
    {
        printf("No");
        return 0;
    }
 
    printf("Yes");
}
