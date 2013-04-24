
#include<stdio.h>
int main(){

    int x=25;
    int *ptr=&x;
    int **temp=&ptr;
    int ***th=&temp;
    printf("%d %d %d %d",x,*ptr,**temp,***th);


    //*ptr= *(&x) //from statement one
    //=*&x
    //=x using cancellation rule


    char str[50];
    char *rev;
    printf("\n\nEnter any string : ");
    scanf("%s",str);
    rev = strrev(str);//strrev() from library
    printf("Reverse string is : %s",rev);

    char str2[50];
    int number;

    //Accepting a numer in string format
    printf("\nEnter any number as a string : ");
    scanf("%s",str2);

    //Converting string into the number;
    number = atoi(str2);
         if(number==0 && str2[0]!='0')
             printf("\nInvalid number");
         else
             printf("\n Equivalent number is : %d",number);
    return 0;
}
