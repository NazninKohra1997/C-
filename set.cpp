#include<bits/stdc++.h>
using namespace std;

struct array{
    int A[20];
    int size;
    int length;
};

void fun1(struct array arr){
    for(int i=0;i<arr.length;i++){
    cout<<arr.A[i]<<"\n";
    }
}

void fun2(struct array *arr,int index,int x){
     if(index>=0 && index<=arr->length){
        arr->A[index]=x;
        cout<<arr->A[index];
     }
}

int main(){
    struct array arr={{1,2,3,6},20,4};
    fun1(arr);
    fun2(&arr,2,30);

    return 0;
}

