#include<bits/stdc++.h>
using namespace std;

struct array{
    int A[20];
    int length;
    int size;
};

void fun1(struct array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i];
    }
}

int fun2(struct array *arr,int index){
    int x=0;
    if(index>=0 && index<arr->length){
        x=arr->A[index];

        for(int i=index;i<arr->length-1;i++){
            arr->A[i]=arr->A[i+1];
        }

        arr->length--;
        return x;
    }
}


int main(){
    struct array arr={{1,2,3,4,5},5,20};
    int f=fun2(&arr,2);
    cout<<"Deleted: "<<f<<"\n";
     fun1(arr);
    return 0;
}
