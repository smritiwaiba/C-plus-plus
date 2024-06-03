#include<iostream>
using namespace std;

namespace first{
    void display(){
        cout<<"This is first namespace \n";
    }
}

namespace second{
    void display(){
        cout<<"This is second namespace";
    }
}

int main(){

    //calling functions 
    //syntax: namespace_name::function_name();

    first::display();
    second::display();


    return 0;
}