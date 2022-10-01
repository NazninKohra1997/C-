#include<bits/stdc++.h>
using namespace std;

long int fact(long int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}

int main(){
    long int n;
    cin>>n;

    cout<<fact(n);

}

