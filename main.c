#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   printf("Start program \n");
    double a=3.16;
    double b=7.11;
    double x=-1.23;
    double q;
    double f;
    double res;
    printf("%f %f %f \n", a, b, x);
    q=exp(a*b)*cos(b-x);
    f=sin(a+x);
    res=(q/f);
    printf("Answer\n");
    printf("%f",res);
    return 0;
}
