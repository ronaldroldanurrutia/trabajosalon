#include<iostream>

using namespace std;

int main(){
    cout<<"Hello World!"<<'\n';
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Hello World!"<<endl;
    }
    cin>>n;
    int i=0;
    while(i<n){
        cout<<"Hello World!"<<endl;
        i++;
    }
    i=0;
    cin>>n;
    do{
        cout<<"Hello World!"<<endl;
        i++;
    }
    while(i<n);
    return 0;
}
