#include<bits/stdc++.h>
using namespace std;

void Swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void buble(int A[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(A[j]<A[j+1]){
                Swap(&A[j],&A[j+1]);
            }
        }
    }
}

int main(){
    int A[]={70,60,90,40,80,10,20,30},n=8;
    int i;
    buble(A,8);

    for(i=0;i<n;i++){
        cout<<A[i]<<"\n";
    }
    return 0;
}
