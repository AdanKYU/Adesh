#include<stdio.h>
#include<math.h>
int main ()
{
int radius;
int volume;
int pI=3.142;
printf("enter radius\n");
scanf("%d",&radius);
volume=4/3*pI*radius*radius*radius;
printf("volume=%d\n", volume);
return (0);
}

