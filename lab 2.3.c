#include <stdio.h>
#include <locale.h>
 
int main()
{
    setlocale(LC_ALL, "rus");
    int x;
    scanf("%i", &x);
    if(x == 1)
        printf("€нварь");
    else if(x == 2)
        printf("февраль");
    else if(x == 3)
        printf("март");
    else if(x == 4)
        printf("апрель");
    else if(x == 5)
        printf("май");
    else if(x == 6)
        printf("июнь");
    else if(x == 7)
        printf("июль");
    else if(x == 8)
        printf("август");
    else if(x == 9)
        printf("сент€брь");
    else if(x == 10)
        printf("окт€брь");
    else if(x == 11)
        printf("но€брь");
    else if(x == 12)
        printf("декабрь");
    else
        printf("ћес€ц не существует");
}
