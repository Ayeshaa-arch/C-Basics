#include<stdio.h>
#include<math.h>
// Program to print the average of 3 numbers

int main () {
 float num1 , num2 , num3 , average ;

 printf("Enter three numbers : ");
 scanf("%f %f %f", &num1 , &num2 , &num3);

    average = (num1 + num2 + num3) / 3 ;
    printf("The average is : %.2f\n",average);
   return 0; 
}
