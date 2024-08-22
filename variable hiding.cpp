#include<iostream>
using namespace std;
class A{
    protected:
        int a=1,b=2,c=3;
    public:
        void show(int a){
            cout<<a+b+c<<endl;
        }    
};

class B:public A{
    public: 
        int a=4;
        void play(int c){
            int d=5;
            cout<<a+b+c+d<<endl;
        }
};
int main(){
    B obj;
    obj.show(6);
    obj.play(7);
    return 0;
}