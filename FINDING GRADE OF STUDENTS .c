//program to find grade of a students
#include<stdio.h>
int main()
{
int marks;
int grade;
printf ("enter marks");
scanf("%d",&marks);
if (marks>=70 && marks<=100)
{
printf("grade A");
}
else if (marks>=60 && marks<= 69)
{
printf("grade B");
}
else if (marks>=50 && marks<=59)
{
printf("grade C");
}
else if (marks>=40 && marks<=49)
{
printf("grade D");
}
else if (marks>=0 && marks<=39)
{
printf("FAIL");
}
else 
{
printf("SYNTAX ERROR");}
return 0;
}
