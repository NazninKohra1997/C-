#include<bits/stdc++.h>
using namespace std;

void Swap(int *x,int *y){
     int temp;
     temp=*x;
     *x=*y;
     *y=temp;
}
void selection(int A[],int n){
    int i,j,k;
    for(i=0;i<n-1;i++){
        for(j=k=i;j<n;j++){
            if(A[j]<A[k]){
                k=j;
            }
        }
        Swap(&A[i],&A[k]);
    }
}

int main(){
     int A[]={8,5,7,3,2},n=5;
     selection(A,5);
     int i;

     for(i=0;i<n;i++){
        cout<<A[i]<<"\n";
     }

     return 0;
}
