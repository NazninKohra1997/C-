#include<bits/stdc++.h>
using namespace std;

struct array{
    int A[5];
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

void fun2(struct array *arr){
    int i;
    int j;
       for(i=0,j=arr->length-1;i<j;i++,j--){
          swap(arr->A[j],arr->A[i]);

        }

}

int main(){
    struct array arr={{5,4,3,2,1},5,5};
    fun2(&arr);
    fun1(arr);

    return 0;
}
