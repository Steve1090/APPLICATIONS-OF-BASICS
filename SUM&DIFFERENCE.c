#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
int a; 
int b;
float c;
float d;
int SUM1,DIFF1;
float SUM2, DIFF2;
printf("Enter the number a:"); 
scanf("%d",&a); 
printf ("Enter the number b:"); 
scanf("%d",&b); 
printf("Enter the float:");
scanf("%f",&c); 
printf("Enter the float");
scanf("%f",&d);
SUM1= a+b;
SUM2 =c+d;
DIFF1= a-b;
DIFF2= c-d;
printf("The sum of the int: %d,%f",SUM1,SUM2);
printf("\nThe difference of the float:%d, %f",DIFF1, DIFF2);
return 0; 
}