#include<bits/stdc++.h>
using namespace std;

struct array{
    int A[20];
    int length;
    int size;
};

void fun1(struct array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<"\n";
    }
}

void fun2(struct array *arr,int x){
    if(arr->length<arr->size){
       arr->A[arr->length++]=x;
       cout<<x;
    }
}



int main(){
    struct array arr={{1,2,3,4},4,20};
    fun1(arr);
    fun2(&arr,9);
return 0;
}
