#include<bits/stdc++.h>
using namespace std;

int sum(int n){
   if(n==0){
    return 0;
   }

   else{
    return sum(n-1)+n;
   }
}

int main(){
    int x=7;
    int f;
    f=sum(x);

    cout<<f;
    return 0;
}
