#include<iostream>

using namespace std;

int main(){
    int n;
    while(true){
        cin>>n;
        if(n<0){
            cout<<"Good Bye"<<endl;
            break;
        }
        else{
            if(n%5==0){
                cout<<n<<"/5"<<endl;
                continue;
            }
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
