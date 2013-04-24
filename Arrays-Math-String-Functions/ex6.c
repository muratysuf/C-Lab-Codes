#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    double x = 2.25;
    double less = 0.0;
    double more = 0.0;
    double root = 0.0;
    double square=0.0;

    printf("\nExamples in maths.h - x = 2.25\n");

    less = floor(2.25);
    printf("\nless = floor(x) is %.2f",less);

    more = ceil(2.25);
    printf("\nmore = ceil(x) is %.2f",more);

    root = sqrt(2.25);
    printf("\nroot = sqrt(x) is %.2f",root);

    square=pow(x,2);
    printf("\nx^2=%.2lf",square);


    /* initialize random generator */
    srand ( time(NULL) );

    /* generate random numbers */

    printf ("\nA number between 0 and 100: %d\n", rand() % 100);

    printf ("\nA number between 20 and 30: %d\n", rand() % 10 + 20);




    return 0;
}
