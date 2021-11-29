#include<stdio.h>
#include<math.h>
double angleHM(int hr,int min)
{
    float h =(hr%12+(float)min/60)*30;
    float m =min*6;
    float ang=fabs(h-m);
    if(ang>180)
    {
        ang=360-ang;
    }
    return ang;
}

void main()
{
    int hr,min;
    printf("Enter Time HH MM: ");
    scanf("%d %d",&hr,&min);
    printf("Angle is %f",angleHM(hr,min));
}
