#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    int i;
    int total=0;



    for(i=0;i<n;i++){
        cin>>a[i];
    }
     int d,m;
    cin>>d>>m;


   for(i=0;i<n;i++){
         for(int i=0;i<m;i++){
    if(a[i]++==d){
        total=total+1;
    }
   }
}
cout<<total;
    return 0;
}
