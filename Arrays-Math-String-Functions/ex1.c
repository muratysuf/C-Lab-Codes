
#include <stdio.h>

float arit_midd( float a, float b, float c )
{

    float ar;
    ar = (a + b + c) / 3;
    return ar; // How many values “return” may return?

}
void calc(int x, int y, int *add, int *sub)
{
    *add = x+y;
    *sub = x-y;
}

int main(void)
{

    float x, y, z, midd;
    printf("\nInput three real numbers : ");
    scanf("%f %f %f", &x, &y, &z );
    midd = arit_midd(x,y,z);
    printf("\nArithmetic middle : %f\n\n", midd);

    //addition and substraction
    int a=20, b=11, p,q;
    calc(a,b,&p,&q);
    printf("Sum = %d, Sub = %d",p,q);
}
