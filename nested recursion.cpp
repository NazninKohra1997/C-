#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n>100){
        return n-10;
    }

    else{
        return fun(fun(n+11));
    }
}

int main(){
    int x=14;
    int f;
    f=fun(x);
    cout<<f;

    return 0;
}
