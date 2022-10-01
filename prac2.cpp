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

void swap(int *x,int *y){
    int temp;
    *x=temp;
    *x=*y;
    *y=temp;
}

int fun2(struct array *arr,int index){
    for(int i=0;i<arr->length;i++){
        if(index==arr->A[i]){
            swap(arr->A[i-1],arr->A[i]);
            return arr->A[i-1];
        }

    }

    return -1;
}


int main(){
     struct array arr={{10,22,30,50,2},20,5};
    cout<< fun2(&arr,30)<<"\n";
    fun1(arr);

     return 0;
}
