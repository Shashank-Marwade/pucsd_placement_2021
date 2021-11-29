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
// double angleMS(int hr,int min,int sec)
// {
//     float m =(min%60+(float)sec/360)*6;
//     float s= sec*0.1;
//     float ang=fabs(m-s);
//     if(ang>180)
//     {
//         ang=360-ang;
//     }
//     return ang;
// }
void main()
{
    int hr,min,sec;
    printf("Enter Time HH MM: ");
    scanf("%d %d",&hr,&min);
    printf("Angle is %f",angleHM(hr,min));
    
    //printf("Enter Time HH MM SS: ");
    //scanf("%d %d %d",&hr,&min,&sec);
    //printf("Angle is %f",angleMS(hr,min,sec));

}
