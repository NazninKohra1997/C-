#include<bits/stdc++.h>
using namespace std;

struct array{
    int A[10];
    int length;
    int size;
};

void fun1(struct array arr){
    int max=arr.A[0];
    int min=arr.A[0];

    for(int i=0;i<arr.length;i++){
        if(arr.A[i]>max){
            max=arr.A[i];

        }

        else if(arr.A[i]<min){
            min=arr.A[i];
        }

    }
    cout<<max<<"\n";
     cout<<min<<"\n";
}

int main(){
    struct array arr={{4,6,9,8},4,10};
    fun1(arr);
    return 0;
}
