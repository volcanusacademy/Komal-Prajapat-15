// 5) Program to find out whether entered number lies in between 50 and 100 or not
#include<stdio.h>
void main(){
    int n;
    printf("enter any number:- ");
    scanf("%d",&n);
    if(n>50 && n<100){
        printf("number lies between 50 to 100");
      }
      else{
          printf("number not lies between 50 to 100"); 
      }
}