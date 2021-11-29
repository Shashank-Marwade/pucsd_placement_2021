#include <stdio.h>
#include<stdlib.h>
long find(int n)
{

    int f1 = 0, f2 = 1;
    long s;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            s = f1 + f2;
            f1 = f2;
            f2 = s;
        }
        return s;
    }
    
}
void main(int argc,char* argv[])
{
    int t=0;
    char *value;
    for(int j=1;j<argc;j++)
    {
        value = argv[j];
        t+=atoi(value);
    }
    printf("Fibonacci No. is %ld", find(t));
}