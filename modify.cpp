#include<iostream>

using namespace std;

int main(){
    int n;
    do{
        cin>>n;
        if(n%5==0){
            cout<<n<<"/5"<<endl;
            continue;
        }
        cout<<" "<<endl;
    }
    while(true);
return 0;
}
