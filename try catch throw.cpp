#include<iostream>
using namespace std;
/*int main(){
    int a=1,b=0,c;
    try
    {
        if(b==0){
            throw b;
        }
        else{
            c=a/b;
            cout<<b<<endl;
        }
    }
    catch(int b)
    {
        cout<<"Invalid"<<endl;
    }
    return 0;
}*/

int main(){
    int a=1;
    try{
        if(a==0){
            throw 10;
        }
        else if(a==1){
            throw "A";
        }
        else if(a==2){
            throw 20.5;
        }
    }
    catch(int a){
        cout<<"integer"<<endl;
    }
    catch(...){
        cout<<"other exception"<<endl;
    }
    return 0;
}

/*STRING EXCEPTION*/
 '''int main(){
    int a=1;
    try{
        if(a==0){
            throw "ZERO DIVISION EXCEPTION";
        }
        else{
            cout<<a<<endl;
        }
    }
    catch(const char* msg){
        cout<<msg<<endl;
    }    
    return 0;
}'''
