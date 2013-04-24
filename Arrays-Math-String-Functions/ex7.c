#include<stdio.h>

void func1(int *x)
{

   x[5]=7;

}
void func2(int x[])
{
   x[5]=8;

}
void func3(int x[10])
{   static int count=0;
    x[5]=9;
    count++;
    printf("\ncount=%d",count);
}

int main()
{   int array[10];
    int const pi=3;//const means final!
   // pi=5; error
    func1(array);
    printf("\narray[5]=%d",array[5]);
    func2(array);
    printf("\narray[5]=%d",array[5]);
    func3(array);
    printf("\narray[5]=%d",array[5]);
    func3(array);
    func3(array);

    return 0;
}
