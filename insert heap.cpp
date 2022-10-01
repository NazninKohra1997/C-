#include<bits/stdc++.h>
using namespace std;

struct In{
    int A[];
};


void Insert(struct In *in,int n){
    int temp,i;
    i=n;
    temp=in->A[n];
    while(i>1&&temp>in->A[i/2]){
        in->A[i]=in->A[i/2];
        i=i/2;
    }
    in->A[i]=temp;

}

void create(){
    int A[]={0,10,20,30,25,5,40};
    int i;
    for(i=0;i<8;i++){
        Insert(A[i]);
    }
}
