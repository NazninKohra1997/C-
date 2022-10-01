#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void Insertion(int A[],int n){
    int i,j;
    for(i=1;i<n;i++){
        for(j=i;j>0&&A[j-1]>A[j];j--){
            swap(A[j],A[j-1]);
        }
    }
}

int main(){
    int A[]={10,5,3,8,11,6,5,2},n=8;
    Insertion(A,8);
    int i;
    for(i=0;i<n;i++){
        cout<<A[i]<<"\n";
    }

    return 0;
}
