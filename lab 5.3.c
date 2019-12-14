#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,m;
    int i,j;
    scanf("%i %i", &n, &m);
    int arr[128][128];
    int sum = 0;
    int more = 1;
    for(i=0; i<n; i++)
    {
        int ch = 1;
        int test = 0;
        for(j=0; j<m; j++)
        {
            scanf("%i", &arr[i][j]);
            if(arr[i][j] < 0)
                ch = 0;
            test += arr[i][j];
        }
        if(ch == 1)
        {
            if(more == 1)
                sum = test;
 
            more = 0;
        }
    }
 
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            arr[i][j] -= sum;
    }
 
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            printf("%i ", arr[i][j]);
        printf("\n");
    }
}
