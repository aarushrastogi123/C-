#include<iostream>
using namespace std;
int c=0;
class alpha{
    public:
    alpha(){
        c++;
        cout<<"\n Objects Created: "<<c;
    }
    ~alpha(){
        cout<<"\n Objects Destroyed: "<<c;
        c--;
    }
};
int main(){
    alpha a1,a2,a3;
    return 0;
}