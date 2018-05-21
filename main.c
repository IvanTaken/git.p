#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int rec;

double itteration(double,double*,int);

double recursion(double,double*,int);

double recursion(double x, double *arr, int n)
{
    rec++;
    if ( n > 1 ) return arr[n] + recursion( x, arr, n-1 ) * x;
    return arr[0] * x + arr[1];
}
