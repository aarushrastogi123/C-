#include<iostream>
using namespace std;

'''Class Template'''

template <class T>
class A {
    public:
    T val1; T val2;
    A(T a, T b){
        val1=a;
        val2=b;
    }    
    void show(){
        if(val1>val2){
            cout<<"val1"<<endl;
        }
        else{
            cout<<"val2"<<endl;
        }
    }
};
int main(){
    A <int , int> ob(10,20);
    ob.show();
    return 0;     
}
