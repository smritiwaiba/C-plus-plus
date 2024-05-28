//WAP to find simple interest 
#include<iostream>
using namespace std;
int main(){
    int p,t;
    float r,s;
    cout<<"Enter principle:";
    cin>>p;
    cout<<"Enter time:";
    cin>>t;
    cout<<"Enter rate:";
    cin>>r;
    s = (p*t*r)/100;
    cout<<"the simple interest is: "<<s;

    return 0;
}