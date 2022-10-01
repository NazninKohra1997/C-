#include<bits/stdc++.h>
using namespace std;

int power(int m,int n){
    if(n==0){
        return 1;
    }
    else{
        return power(m,n-1)*m;
    }
}

int main(){
    int c,a;
    cin>>c>>a;

   int f= power(c,a);
   cout<<f;

   return 0;
}
