#include<bits/stdc++.h>
using namespace std;

struct array{
    int A[20];
    int size;
    int length;
};

void fun(struct array arr){

        for(int i=0;i<arr.length;i++){
            cout<<arr.A[i]<<"\n";
        }

}

int fun2(struct array *arr,int index){
    int x=0;

    x=arr->A[index];
    if(index>=0 && index<arr->length){
            arr->A[index]=x;
        for(int i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }
            arr->length--;

        return x;

    }
}

int main(){
    struct array arr={{1,2,3,4},20,4};
    fun(arr);
    int c=fun2(&arr,2);
    cout<<c<<"\n";

    return 0;
}
