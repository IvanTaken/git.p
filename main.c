
double itteration(double x,double *array,int n)
{
    double sum = 0.0;
    double cur_x = 1.0;
    for(int i = n; i >= 0; i--)
    {
        if (i < n) cur_x *= x;
        sum += array[i] * cur_x;
    }
    return sum;
}
