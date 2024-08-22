#include<iostream>
using namespace std;

//single inheritance
 
class A//parent class
{
  public:
      int a=1;
};

class B:public A //child class
{
    public:
        int b=2;
};

int main(){
    cout<<"ATTRIBUTE METHOD"<<endl;
    B obj;
    cout<<obj.a+obj.b<<endl;
    return 0;
}



class c{
    public:
        c(){
            cout<<1<<endl;
        }
};

class d: public c{
    public:
    d(){
        cout<<2<<endl;
    }
};

int main1(){
    cout<<"CONSTRUCTOR METHOD"<<endl;
    d obj;
    return 0;
}



class e{
    protected:
    int a=1,b=2;
};
class f:protected e{//(protected/public both of these can be used)
    public:
        void output(){
            cout<<a+b<<endl;
        }
};
int main2()
{
    cout<<"PRIVATE PROTECTED EXAMPLE"<<endl;
    f obj;
    obj.output();
    return 0;
}



