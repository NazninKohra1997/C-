#include<bits/stdc++.h>
using namespace std;

struct array{
    int A[10];
    int length;
    int size;
};

void fun1(struct array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<"\n";
    }
}





struct array *merge(struct array *arr1,struct array *arr2){
     int i,j,k;
     i=j=k=0;
struct array *arr3=new struct array;

     while(arr1->A[i]<arr1->length && arr2->A[j]<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }

        else{
            arr3->A[k++]=arr2->A[j++];
        }
        for(;i<arr1->length;i++){
            arr3->A[k++]=arr1->A[i];
        }
        for(;j<arr2->length;j++){
            arr3->A[k++]=arr2->A[j];
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
    //fun2(arr2);
    //fun3(&arr1,&arr2,&arr3);

    return 0;
}
