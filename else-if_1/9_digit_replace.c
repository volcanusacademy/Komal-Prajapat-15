// 9) Program to check whether entered character is a digit or not and if yes, then replace it by *

// standard input-output header file
#include<stdio.h>
void check(char c){ //check function
    if(c >='0' && c <= '9'){    //check condition
        printf("character is a digit\n");
        replace(c); // calling replace function
    }
    else{
        // this block executed when condition is false
        printf("character is not a digit \n");
    }

}
void  replace(char c){  //replace function
     c = '*';       //replace value of char to '*'
    printf("%c",c);
}


void main(){    //main function
    char c;
    printf("enter any character :- ");
    scanf("%c",&c);

    check(c);   //call check function
}