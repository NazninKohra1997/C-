#include<bits/stdc++.h>
using namespace std;

struct array{
    int A[10];
    int size;
    int length;
};

void fun1(struct array arr){
    int H[13];
    for(int i=0;i<arr.length;i++){
        H[arr.A[i]]++;
    }
    int h=12;
    int l=1;

    for(int i=l;i<=12;i++){
        if(H[i]==0){
            cout<<H[i]<<"\n";
        }
    }
}

int main(){
    struct array arr={{3,7,4,9,12,6,1,11,2,10},10,10};
    fun1(arr);
    return 0;
}
