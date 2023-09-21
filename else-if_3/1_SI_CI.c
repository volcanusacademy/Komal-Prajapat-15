// 1) Program to find out compound interest if principal is greater than or equals to 500 otherwise find out simple interest
#include<stdio.h>
void main(){
int p,A ;
float r , t ,ci , si ;

printf("enter principal ");
scanf("%d",&p);
printf("enter rate ");
scanf("%f",&r);
printf("enter time ");
scanf("%f",&t);
if(p>=500){
A  = p * (pow((1 + r / 100), t));
ci = A - p; 
printf("compound intersent is %f" , ci);
}
else{
si=((p*r*t)/100);
printf("simple interest is %f",si);
}
}