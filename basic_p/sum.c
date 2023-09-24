// Write a program in C to add two numbers

#include <stdio.h>
void add(int n1,int n2){        //add function in which perfome add operation
    int sum=n1+n2;          
 printf("sum of %d  + %d = %d " , n1,n2,sum);       //print output
}

void main(){            //entry point of our function
    int n1,n2;
    printf("enter n1:- ");  
    scanf("%d",&n1);
    printf("enter n2:- ");
    scanf("%d",&n2);

   add(n1,n2);  //add function call
}