#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void bubble(int A[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(A[j]>A[j+1]){
                swap(&A[j],&A[j+1]);
            }
        }
    }
}

int main(){
    int A[]={10,8,6,2,5},n=5;
    int i;
    bubble(A,5);
    for(i=0;i<n;i++){
        cout<<A[i]<<"\n";
    }
    return 0;
}
