#include<stdio.h>

void main(){
int a;
printf("Enter Your Age : ");
scanf("%d", &a);
if  (a<18)
{
printf("You are not eligible for any action right now");
}
 else if(a>=18)
 {
    printf("You are eligible for voting");
 }
}