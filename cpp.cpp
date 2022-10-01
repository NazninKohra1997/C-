#include<bits/stdc++.h>
using namespace std;

class array{
private:
    int A[10]={1,2,3,10,6,7,7,8,9,4};
    int length;
    int size;

public:

    void fun1(int ln,int sz);
    void fun2();
};

    void array:: fun1(int ln,int sz){
        ln=length;
        sz=size;
    }

    void array:: fun2(){
        for(int i=0;i<10;i++){
            cout<<A[i]<<"\n";
        }
    }


int main(){
    array arr;
    arr.fun1(10,10);
    arr.fun2();

    return 0;
}
