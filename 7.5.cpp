#include<iostream>

using namespace std;

int main(){
    char oddOrEven[] = " Never odd or even ";
    char *q;
    q=oddOrEven;
    cout<<*(q+1)<<endl;
    cout<<*(q+6)<<endl;
    cout<<*(q+4)<<endl;
    return 0;
}
