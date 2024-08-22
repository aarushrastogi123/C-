#include <iostream>
using namespace std;
class E
{
private:
    int a, b, c;

public:
    int e,d;
    void setData(int a1, int b2, int c3);
    void getData();
};
void E::setData( int a1, int b2, int c3){
    a=a1;
    b=b2;
    c=c3;
}
void E::getData(){
    cout<<"Values are : "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
}
int main()
{
    E Aarush;
    Aarush.d=4;
    Aarush.e=5;
    Aarush.setData(1,2,3);
    Aarush.getData();
    return 0;
}
