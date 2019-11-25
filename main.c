#include <stdio.h>
#include <locale.h>
#include <math.h>
///программа для проверки на ошибки вычисления выражения

int main()
{
    setlocale(0,"");
    float x;
    printf("Введите x: ");
    scanf("%f",&x);
    if(x<4)
     {
         if (x<0)
         {
             printf("\nОшибка, корень не может быть меньше нуля (sqrt(x))");
         }
         else if (fabs(x)<1e-7) /// x==0
         {
             printf("\nОшибка, на ноль делить нельзя (x(x+5))");
         }
         else
         {
             printf("\nОшибок нет!");
         }
     }
    else if(x>4)
    {
        printf("Ошибок нету!");
    }
    else  /// x==4
    {
        printf("Неопределенный интервал!");
    }
    return 0;
}
