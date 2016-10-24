#include<stdio.h>
#include <stdlib.h>
#include<math.h>

using namespace std;

void montecarlo(int n){
    float numerox,numeroy,dentro=0,fuera=0;
    int i=0;
    for(i=0;i<n;i++){
        numerox=rand()%50;
        numeroy=rand()%50;
        if(sqrt(numerox*numerox+numeroy*numeroy)<=50){
            dentro++;
        }
        else{fuera++;}
    }
    printf("%f",dentro/fuera);
    return ;
}
int main(){
char n;
montecarlo(180);
return 0;
}
