#include<iostream>

using namespace std;

int transpuesta(int matrix[20][20],int n,int m){
    int matriz[m][n];
    for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
            matriz[i][j]=matrix[j][i];
       }
    }
    return matriz[m][n];
}
int main(){

return 0;
}
