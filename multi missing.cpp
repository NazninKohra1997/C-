#include<bits/stdc++.h>
using namespace std;

struct array{
    int A[10];
    int length;
    int size;
};

void fun1(struct array arr){
    int diff=arr.A[0]-0;

     for(int i=0;i<arr.length;i++){
        if((arr.A[i]-i)!=diff){
                cout<<i+diff<<"\n";
                diff++;

        }
     }
}

int main(){
    struct array arr={{6,7,8,10,12},5,10};
    fun1(arr);

    return 0;
}
