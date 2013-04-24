
#include <stdio.h>
int main ()
{
  FILE * file;
  char c;
  int n = 0;
  file=fopen ("my.txt","r");

  if (file==NULL)
      perror ("Error reading my.txt");
  else
  {
    do {
      c = fgetc (file);
      if (c == '$')
          n++;
    } while (c != EOF);

    fclose (file);
    printf ("File contains %d $.\n",n);
  }system("PAUSE");
  return 0;
}


