#include<bits/stdc++.h>
using namespace std;

struct array {
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
    if(index>0 && index<arr->length){
        for(int i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
            arr->A[index]=x;
            cout<<x<<"\n";
            arr->length++;
        }
    }
}

int main(){
    struct array arr={{1,2,3,4},20,4};
    fun1(arr);
    fun2(&arr,3,9);

    return 0;
}
