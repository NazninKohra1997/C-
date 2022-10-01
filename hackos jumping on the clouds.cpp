#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int sum=100;
    int net;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(i%k==0 && i!=0){
            //cout<<i<<" ";
            net=a[i];
            //cout<<net<<" ";
            if(net==1){
                sum=sum-(2+1);
               // cout<<sum<<" ";
            }
            else{
                sum=sum-1;
               // cout<<sum<<" ";
            }
        }
    }

    if(a[0]==1){
        sum=sum-(2+1);
    }
    else{
        sum=sum-1;
    }


    cout<<sum;

return 0;
}
