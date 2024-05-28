//explicit data conversion using assignment operator
#include<iostream>
using namespace std;
int main(){
    float num1 = 20.9;
    int num2;
    num2 = (int)num1;  //giving the value for int num2 from the floating value of num1
    cout<<num1<<endl;
    cout<<num2;

    return 0; 
}