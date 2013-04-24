#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char * String;
substr(char dest[], char src[], int offset, int len)
{
    int i;
    for(i = 0; i < len && src[offset + i] != '\0'; i++)
        dest[i] = src[i + offset];
    dest[i] = '\0';
}
int main()
{
    String str1="M. Yusuf Taze.";//wayy
    printf("%s\n",str1);
    char string3[] = "this is";
    char string4[] = "a test";

    if(strcmp(string3, string4) == 0)
        printf("strings are equal\n");
    else	printf("strings are different\n");

    char string5[20] = "Hello, ";
    char string6[] = "world!";

    printf("%s\n", string5);

    strcat(string5, string6);

    printf("%s\n", string5);


    char string7[] = "abc";
    int len = strlen(string7);
    printf("%d\n", len);


    char string8[] = "this is a test";
    char string9[10];
    substr(string9, string8, 5, 4);
    printf("%s\n", string9);
}
