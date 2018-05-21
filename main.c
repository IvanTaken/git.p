#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int rec;

double itteration(double,double*,int);

double recursion(double,double*,int);

int main()
{
    int n,m;
    double x;
    double arr[MAX][MAX+1];

    printf("Enter int n: "); scanf("%d", &n);
    printf("Enter real x0: "); scanf("%lf", &x);
    printf("Enter num of rows: "); scanf("%d", &m);

    for(int i = 0; i < m; i++)
        for(int j = 0; j <= n; j++) {
            printf("\na[%d][%d] = ", i,j);
            scanf("%lf", &arr[i][j]);
        }

    for(int i = 0; i < m; i++)
    {
        rec = 0;

        printf("\nFor %d row:", i);

        printf("\nResult of recursion function = %.3f", recursion(x,arr[i],n));

        printf("(function was called %d times)", rec);

        printf("\nResult of itteration function = %.3f", itteration(x,arr[i],n));
    }

    return 0;
}
