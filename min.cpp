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

int fun2(struct array arr){
    int min=arr.A[0];

    for(int i=1;i<arr.length;i++){
        if(arr.A[i]<min){
            min=arr.A[i];
        }

    }

    return min;

}


int main(){
    struct array arr={{50,80,1,33,0},20,5};
    fun1(arr);
    cout<<fun2(arr);

    return 0;
}
