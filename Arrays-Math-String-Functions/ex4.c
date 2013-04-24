#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string1[10]="Murat";
    char string2[7]= {"Yusuf"};
    printf("\nstring1:%s",string1);
    printf("\nstring2:%s",string2);
    char (*ptr_for_murat)[10]=&string1;//pointer for string1
    printf("\n%c",*(*ptr_for_murat+2));
    printf("\n%s",(*ptr_for_murat));


    char *array[4]= {"c","c++","java","sql"};
    printf("\n%s",array[1]);
    char *(*ptr)[4]=&array;
    printf("\n%s ",++(*ptr)[2]);



    /*  ++(*ptr)[2]
      =++(*&array)[2] //ptr=&array
      =++array[2]
      =++”java”
      =”ava” //Since ptr is character pointer so it
      // will increment only one byte

    Note: %s is used to print stream of characters up to null (\0) character.
      */
    return 0;
}
