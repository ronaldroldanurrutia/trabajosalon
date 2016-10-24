#include<iostream>

using namespace std;
string arrays(string elemento,int numero){
    string n="";
    numero--;
    for(int i=0;i<numero;i++){
        n+=elemento[i];
        n+=',';
    }
    n+=elemento[numero];
    return n;
}
int main(){

    cout<<arrays("hola",4)<<endl;
    return 0;
}
