#include <stdio.h>
#include<stdlib.h>
long sum(int l[],int st,int n)
{
    long s=0;
    // printf("\n");
    for(int i=st;i<n;i++)
    {
        s+=l[i];
    // printf("%ld ",s);
    }
    return s;
}
long diff(int t,int i)
{
    int lst[t];
    long a,b;
    for(int i=0;i<t;i++)
    {
        lst[i]=2*i+4;
        // printf("%d ",lst[i]);
    }
    a=sum(lst,0,i);
    b=sum(lst,i+1,t);
    return abs(b-a);
}
void main(int argc,char* argv[])
{
    int t=0,i;
    char *value;
    for(int j=1;j<argc;j++)
    {
        value = argv[j];
        t+=atoi(value);
    }
    printf("Partition at ");
    scanf("%d",&i);
    printf("Minimum difference is %ld", diff(t,i));
}