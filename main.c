#include <stdio.h>
#include <locale.h>
#include <math.h>
///��������� ��� �������� �� ������ ���������� ���������

int main()
{
    setlocale(0,"");
    float x;
    printf("������� x: ");
    scanf("%f",&x);
    if(x<4)
     {
         if (x<0)
         {
             printf("\n������, ������ �� ����� ���� ������ ���� (sqrt(x))");
         }
         else if (fabs(x)<1e-7) /// x==0
         {
             printf("\n������, �� ���� ������ ������ (x(x+5))");
         }
         else
         {
             printf("\n������ ���!");
         }
     }
    else if(x>4)
    {
        printf("������ ����!");
    }
    else  /// x==4
    {
        printf("�������������� ��������!");
    }
    return 0;
}
