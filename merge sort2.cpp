#include<bits/stdc++.h>
using namespace std;

void Merge(int A[],int B[],int m,int n,int C[]){
    int i,j,k;
    i=j=k=0;

    while(i<m && j<n){
    if(A[i]<B[j]){
        C[k++]=A[i++];
    }
    else{
        C[k++]=B[j++];
    }

    }
    for(;i<m;i++){
        C[k++]=A[i];
    }
    for(;j<n;j++){
        C[k++]=B[j];
    }
}

int main(){
     int A[]={2,10,18,20,23},m=5;
     int B[]={4,9,19,25},n=4;

     int C[m+n];
     int i;

     Merge(A,B,m,n,C);

     for(i=0;i<m+n;i++){
        cout<<C[i]<<"\n";
     }

     return 0;
}
