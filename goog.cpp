#include<iostream>

using namespace std;
https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-096-introduction-to-c-january-iap-2011/assignments/MIT6_096IAP11_assn01.pdf
https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-096-introduction-to-c-january-iap-2011/assignments/MIT6_096IAP11_assn02.pdf
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
