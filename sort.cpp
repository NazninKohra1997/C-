#include<bits/stdc++.h>
using namespace std;

struct array{
    int A[10];
    int size;
    int length;
};

void fun1(struct array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<"\n";
    }
}

struct array* merge(struct array *arr1,struct array *arr2){
    struct array *arr3=new array(arr1->length+arr2->length);

    int i,j,k;
    i=j=k=0;

    while(i<arr1->length && j<arr2->length){
            if(arr1->A[i]<arr2->A[j]){
                A[i++]=A[k++];
            }
            else{
                A[j++]=A[k++]
            }
        for(;i<arr1->length;i++){
            A[i]=A[k];
        }

        for(;j<arr2->length;j++){
            A[j]=A[k];
        }
    }
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;

    return arr3;
}

int main(){
    struct array arr1={{9,10,22,55,76},5,5};
    struct array arr2={{2,11,44,63,70},5,5};
    struct array *arr3;

    arr3=merge(&arr1,&arr2);
    fun1(*arr3);

    return 0;
}
