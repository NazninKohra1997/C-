#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0||n==1){
        return n;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}


int main(){
    int x;
    cin>>x;
    int i;

    int f=fib(x);
    cout<<f;

    return 0;
}
