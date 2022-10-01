#include<bits/stdc++.h>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

void fun(struct Array Arr){
    cout<<"The number of element:"<<"\n";
    for(int i=0;i<Arr.length;i++){
        cout<<Arr.A[i]<<"\n";
    }
}

int main(){
    struct Array Arr={{20,30,40,50},20,4};
    fun(Arr);
    return 0;
}
