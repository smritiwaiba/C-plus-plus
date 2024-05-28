//explicit conversion using cast operator
#include<iostream>
using namespace std;
int main(){
    float num1 = 10.2;
    int num2 = static_cast<int>(num1);  //changing the floating num1 into integer num2
    cout<<num1<<endl;
    cout<<num2;

    return 0;
}