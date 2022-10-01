#include<bits/stdc++.h>
using namespace std;

void Merge(int A[],int B[],int C[],int D[],int m,int n,int o){
    int i,j,k,l;
    i=j=k=l=0;
    while(i<m&&j<n&&l<o){
        if(A[i]<B[j]&&A[i]<D[l]){
            C[k++]=A[i++];
          }
          else if(B[j]<A[i]&&B[j]<D[l]){
            C[k++]=B[j++];
          }
          else{
            C[k++]=D[l++];
          }
    }

    for(;i<m;i++){
        C[k++]=A[i];
    }
    for(;j<n;j++){
        C[k++]=B[j];
    }
    for(;l<o;l++){
        C[k++]=D[l];
    }
}

int main(){
    int A[]={7,10,20},m=3;
    int B[]={2,3,10},n=3;
    int D[]={1,2},o=2;

    int C[m+n+o];

    int i;
    Merge(A,B,C,D,m,n,o);
    for(i=0;i<m+n+o;i++){
        cout<<C[i]<<"\n";
    }

    return 0;
}
