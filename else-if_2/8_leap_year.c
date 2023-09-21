// 8) Program to check whether entered year is a leap year or not using nested if else
#include<stdio.h>
void main(){
    int year;
    printf("enter any year ");
    scanf("%d",&year);
    if(year%4==0){
        printf("leap year");
   }
   else
   printf("not leap year");
}