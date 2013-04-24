#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5],i;
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;

    printf("Value in array arr[0] : %d\n",arr[0]);
    printf("Value in array arr[1] : %d\n",arr[1]);
    printf("Value in array arr[2] : %d\n",arr[2]);
    printf("Value in array arr[3] : %d\n",arr[3]);
    printf("Value in array arr[4] : %d\n",arr[4]);
    printf("\n");

    for(i=0; i<5; i++)
    {
        printf("Value in array arr[%d] : %d\n",i,arr[i]);
    }





    int k, j;
    int array[3][3]=
    {
        {12, 45, 63},
        {89, 34, 73},
        {19, 76, 49}
    };

    printf("\n\n:::2D Array Elements:::\n\n");
    for(k=0; k<3; k++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",array[k][j]);
        }
        printf("\n");
    }



    double a = 64;
    double b;

    //Calling of sqrt function
    b = sqrt(a);

    printf("%lf",b);
    return 0;
}
