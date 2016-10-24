#include<iostream>

using namespace std;

void swa(int *a,int *p){
    int c=*a;
    *a=*p;
    *p=c;
}
int main(){
    int a,b;
    cin>>a>>b;
    swa(&a,&b);
    cout<<a<<'\t'<<b<<endl;
}
