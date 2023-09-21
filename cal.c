// Write a program in C to perform addition, subtraction, multiplication, division by taking input from user.
#include <stdio.h>
void main(){
    int n1=23;
    int n2=34;
    // operation
    int sum = n1+n2;
    int sub = n1-n2;
    int mult = n1*n2;
    int div = n1/n2;
    // print
    printf("sum of %d  + %d = %d\n" , n1,n2,sum);
    printf("sub of %d  - %d = %d \n" , n1,n2,sub);
    printf("mul of %d  * %d = %d \n" , n1,n2,mult);
    printf("div of %d  / %d = %d \n" , n1,n2,div);
}