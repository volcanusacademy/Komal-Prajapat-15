// 10) check if both numbers are equals or not, if not then find out the greatest number
#include<stdio.h>
check(int n1 , int n2){         //function to check value is equal or not
    if(n1==n2){
        printf("both number are equal");
    }
    else{
        greatest(n1,n2);      //if value is not equal then this function call
    }
}
greatest(int n1,int n2){    //function to check greates nnumber 
    if(n1>n2){
        printf("n1 is greater than n2");
    }
    else{
        printf("n2 is greater than n1");
    }
}

void main(){
    int n1,n2;
    printf("enter value of n1 :- ");
    scanf("%d",&n1);
    printf("enter value of n2 :-  ");
    scanf("%d",&n2);
    
    check(n1,n2); //check function call
    
}