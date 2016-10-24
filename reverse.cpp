#include<iostream>
#include<stdio.h>

using namespace std;

void reves(char *p,int inicio,int fin){
    if(inicio>=fin){
        return ;
    }
    char q;
    q=*(p+inicio);
    *(p+inicio)=*(p+fin);
    *(p+fin)=q;
    reves(p,inicio+1,fin-1);
}
int main(){
char p[]="Hola";
reves(p,0,3);
printf("%s",p);
return 0;
}
