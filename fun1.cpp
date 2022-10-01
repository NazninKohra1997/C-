#include<bits/stdc++.h>
using namespace std;

int fun1(int n){
    if(n>0){
    return fun1(n-1)+n;
    }
}

int main(){
    int x=5;
    int f;
    f=fun1(x);
    cout<<f<<"\n";

    return 0;
}
