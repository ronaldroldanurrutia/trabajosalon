#include<iostream>

using namespace std;

int main(){
    int a,b,c,sum,minimo;
    cin>>a>>b>>c;
    minimo=a;
    sum=(a+b+c)/3;
    if(b>a){
        a=b;
    }
    else{
        minimo=b;
    }
    if(c>a){
        a=c;
    }
    else{
        if(c<minimo){
            minimo=c;
        }
    }
    cout<<"Max: "<<a<<endl<<"Mean: "<<sum<<endl<<"Min: "<<minimo<<endl;
    return 0;
}
