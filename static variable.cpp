#include<bits/stdc++.h>
using namespace std;
     //int x=0;
int fun2(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun2(n-1)+x;
    }
}

int main(){
   int c=5;
   int f=fun2(c);
   cout<<f;

   return 0;
}
