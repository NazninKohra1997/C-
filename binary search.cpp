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

int fun2(struct array arr,int key){
     int l=0;
     int h=arr.length-1;
     int mid;
     while(l<=h){
            mid=(l+h)/2;
        if(key==arr.A[mid]){
            return mid;
        }
        else if(key<<arr.A[mid]) l=l-1;
        else h=mid+1;
     }

     return -1;
}

int main(){
    struct array arr={{2,4,5,6,10,9,17},20,7};
    cout<<fun2(arr,9)<<"\n";
    fun1(arr);
    return 0;
}
