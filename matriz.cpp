#include<iostream>

using namespace std;

int contar(string elemento){
    int i=0;
    for(;elemento[i]!=NULL;i++);
    return i;
}
int main(){
string a="jamaica";
cout<<contar(a)<<endl;
return 0;
}
