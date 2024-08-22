#include<iostream>
using namespace std;

class over{
    public:
        int a=1,b=1;
        void show(){
            cout<<a+b<<endl;
        }
        void show(int a){
            cout<<a+b<<endl;
        }
        void show(float a, int b){
            cout<<a+b<<endl;
        }
};

int main(){
    over obj;
    obj.show();
    obj.show(2);
    obj.show(3.5,3);
    return 0;
}

