#include<bits/stdc++.h>
using namespace std;

struct array{
    int A[4];
    int size;
    int length;
};

void fun1(struct array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<"\n";
    }
}

void swap(int*x,int*y){
    int temp;
    *x=temp;
    *x=*y;
    *y=temp;

}

int fun2(struct array *arr,int key){
    for(int i=0;i<arr->length;i++){
      if(key==arr->A[i]){
            swap(arr->A[i],arr->A[i-1]);
      return i;
      }



    }

     return -1;

}

int main(){
    struct array arr={{2,3,4,9},4,4};

    cout<<fun2(&arr,9)<<"\n";
    cout<<"elements are:"<<"\n";
    fun1(arr);

    return 0;
}
