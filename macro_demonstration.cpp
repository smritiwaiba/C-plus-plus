#include<iostream>
#define AREA(l,b)(l*b)
using namespace std;

int main(){
    int num1 = 10, num2 = 10, area;
    area = AREA(num1, num2);
    cout<<"The area is "<<area;


    return 0;
}