#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n,m;
    scanf("%i %i", &n, &m);
    int arr[300][300];
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            scanf("%i", &arr[i][j]);
    }
 
    for(i=0; i<n; i++)
    {
        int max_ = -10000;
        int min_ = 100000;
        int i_x = 0;
        int i_n = 0;
        for(j=0; j<m; j++)
        {
            if(arr[i][j] > max_)
            {
                max_ = arr[i][j];
                i_x = j;
            }
            if(arr[i][j] < min_)
            {
                min_ = arr[i][j];
                i_n = j;
            }
        }
 
        int t = arr[i][i_x];
        arr[i][i_x] = arr[i][i_n];
        arr[i][i_n] = t;
    }
 
    printf("\n\n");
 
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%i ", arr[i][j]);
        }
        printf("\n");
    }
 
    int sum = 0;
    int K = 0;
    if(i < j)
        K = i;
    else
        K = j;
    for(i=0; i<K; i++)
    {
        sum += arr[i][i];
    }
 
    printf("%i", sum);
}
