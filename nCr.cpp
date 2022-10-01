#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}

int nCr(int n,int r){
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);

    return num/den;
}

int main(){
    int f,b;
    cin>>f>>b;
    int c;
    c=nCr(f,b);
    cout<<c;

    return 0;
}
