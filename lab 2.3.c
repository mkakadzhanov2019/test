#include <stdio.h>
#include <locale.h>
 
int main()
{
    setlocale(LC_ALL, "rus");
    int x;
    scanf("%i", &x);
    if(x == 1)
        printf("������");
    else if(x == 2)
        printf("�������");
    else if(x == 3)
        printf("����");
    else if(x == 4)
        printf("������");
    else if(x == 5)
        printf("���");
    else if(x == 6)
        printf("����");
    else if(x == 7)
        printf("����");
    else if(x == 8)
        printf("������");
    else if(x == 9)
        printf("��������");
    else if(x == 10)
        printf("�������");
    else if(x == 11)
        printf("������");
    else if(x == 12)
        printf("�������");
    else
        printf("����� �� ����������");
}
