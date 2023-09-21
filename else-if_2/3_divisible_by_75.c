// 3) Program to check whether entered number is divisible by 75 or not
#include <stdio.h>
void main(){
  int n ;
  printf("enter any number :- ");
  scanf("%d",&n);
    if(n%2==0){
        printf("%d is divisibale by 75 " , n);
    }
    else{
       printf("%d is not divisibale by 75 " , n);
    }
}
