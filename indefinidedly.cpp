#include<iostream>

using namespace std;

int main(){
    int n;
    for(;;){
        cin>>n;
        if(n%5==0){
            cout<<n<<"/5"<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
