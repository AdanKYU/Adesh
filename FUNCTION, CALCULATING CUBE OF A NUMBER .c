//function to calculate the cube of a number
#include<stdio.h>
float cube (float NUM);//function prototype

int main()

{
float input, output;
printf("Enter an number:");
scanf("%f",& input);

output=cube(input); //calling function
printf("\n the cube of %.2f is %.2f", input , output);

return 0;

}
float cube (float NUM) // function definition
{
float NUM_cubed;
NUM_cubed=NUM*NUM*NUM;
return NUM_cubed;

}