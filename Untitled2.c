#include<bits/stdc++.h>
using namespace std;

int A[];

int swap(int *x,int *y){
    int temp;
    *x=temp;
    *x=*y;
    *y=temp;
}

void bubble(int A[],int n){
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
                if(A[j]>A[j+1]){
            swap(&A[j],&A[j+1]);
                }
        }
    }
}

int main(){
     int A[]={5,4,3,2},n=4;
     bubble(A,4);
}
