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
   float sum=0;
   for(int i=0;i<arr.length;i++){
    sum=sum+arr.A[i];
   }

   return (float)(sum/arr.length);

}

int main(){
    struct array arr={{2,2,5},20,3};
    fun1(arr);
    cout<<fun2(arr);

    return 0;
}
