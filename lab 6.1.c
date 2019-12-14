#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n;
    scanf("%i", &n);
 
    int *arr = (int*)malloc(n*sizeof(int));
 
    if(!arr)
        return 0;
 
    int sum = 0;
 
    int max_ = -100000;
    int min_ = 100000;
    int i_x = 0;
    int i_n = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%i", arr+i);
        if(*(arr+i) < 0)
            sum += *(arr+i);
 
        if(*(arr+i) > max_)
        {
            max_ = *(arr+i);
            i_x = i;
        }
        if(*(arr+i) < min_)
        {
            min_ = *(arr+i);
            i_n = i;
        }
    }
 
    if(i_n > i_x)
    {
        int t = i_n;
        i_n = i_x;
        i_x = t;
    }
    printf("%i\n", sum);
    sum=1;
    for(int i=i_n+1; i<i_x; i++)
    {
        sum *= *(arr+i);
    }
    printf("%i", sum);
 
 
}
