#include<iostream>
#include<string.h>
using namespace std;
class Shape{
string color;
public:
void getArea(){
}
};
class Circle:public Shape{
void getArea(int* r){
    float area_cirlce = 3.14 * r * r ;
    cout<<"Area of circle :- "<<area_cirlce;
}
};
class Reactangle:public Shape{
void getArea(int l , int b){
    int area_reactangle = l*b;
    printf("%d",area_reactangle);
}
};
class Triangle:public Shape{
void getArea(int l , int b){
    int area_reactangle =1/2*( l*b);
    printf("%d",area_reactangle);
}
};
int main(){
Shape obj;
int r,l,b;
cout<<"Enter r , l ,b  :- ";
cin>>r>>l>>b;
obj.getArea(r);
obj.getArea(l,b);
obj.getArea(l,b);
return 0;
}
