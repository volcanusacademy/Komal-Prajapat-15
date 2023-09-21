// 6) Program to find out greater number among three numbers and test for all possible equalities
#include<stdio.h>
void main(){
    int n1=2003,n2=304,n3=809;
    if(n1>n2 && n1>n3){
        printf("n1 is greater than n2 and n3 ");
    }
    else if(n2>n1 && n2>n3){
        printf("n2 is greater than n1 and n3 ");
    }
    else{
        printf("n3 is greater than n1 and n2 ");
    }
}