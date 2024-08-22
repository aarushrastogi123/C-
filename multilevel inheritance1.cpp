#include<iostream>
using namespace std;
class A{
    protected:
        int a=1;
    public:
        void show(int b){
            cout<<a+b<<endl;
        }
};

class B:public A{
    protected:
        int b=3;
    public:
        void low(int a){
            cout<<a+b<<endl;
        }    
};

class C:public B{
    protected:
        int c=3;
    public:
        void last(){
            cout<<a+b+c<<endl;
        }    
};

int main(){
    C obj;
    obj.show(10);
    obj.low(20);
    obj.last();
    return 0;
}

