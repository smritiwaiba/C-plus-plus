//demonstrating how structure and classes can function similar functionalities
#include<iostream>
using namespace std;

struct mystruct{
    private:    //access specifier
    int a,b;
    public:
    void my_function(){
        cout<<"hi";
    }
};

int main(){
    mystruct m1; //variable
    m1.my_function();
}