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

     for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
        if(a[i]<a[j]){
            swap(a[i],a[j]);
        }
     }
     }
     int same=a[0];

     for(int i=0;i<n;i++){
        if(a[i]==same){
            sum+=1;
            //cout<<a[i]<<" ";


        }
        else{
                cout<<a[i]<<" ";
             //sum-=i-1;
            same=a[i];
            //break;
        }

     }

     cout<<sum;

     return 0;
}
