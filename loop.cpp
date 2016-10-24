#include<iostream>
#include<stdio.h>

using namespace std;
int suma(void){
    char n;
    int d,suma=0;
    scanf("%c",&n);
    for(;n!='\n';){
        while(n==' ' || n=='\t'){
            scanf("%c",&n);
        }
        d=(n-'0');
        suma+=d;
        scanf("%c",&n);
    }
    return suma;
}
int suma1(void){
    char n;
    scanf("%c",&n);
    int d;
    d=(n-'0');
    if(n>='1' && n<='9'){
        return d+suma1();
    }
    if(n==' ' || n=='\t'){
        return suma1();
    }
    return 0;
}
int main(){
printf("%d",suma1());
return 0;
}
