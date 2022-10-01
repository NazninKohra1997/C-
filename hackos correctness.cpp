#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     int sum=0;

     int a[n];

     for(int i=0;i<n;i++){
        cin>>a[i];
     }

    //sort(a.begin(),a.end());

    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
            sum++;
            i=-1;
        }

    }
    for(int i=0;i<n;i++){
       // cout<<a[i]<<" ";
     }

     cout<<sum;

    return 0;
}
