#include<iostream>

using namespace std;
int raiz(int n){
    for(int i=0;i<=n;i++){
        if((i*i)>n){
            return i-1;
        }
    }
}
bool primo(int n){
    int numero;
    numero=raiz(n);
    for(int i=2;i<=numero;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,i=0,contador=2;
    cin>>n;
    while(i<n){
        if(primo(contador)==true){
            cout<<contador<<endl;
            i++;
        }
        contador++;
    }
    return 0;
}
