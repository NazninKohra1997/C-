#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int Max=a[0];

    for(int i=1;i<n;i++){
        if(a[i]>Max){
            Max=a[i];
        }
    }

   // cout<<Max;

   if(m<Max){
    cout<<Max-m;
   }
   else{
    cout<<0;
   }

   return 0;
}
