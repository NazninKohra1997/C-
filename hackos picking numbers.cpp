#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int sum=0;
    int sum1=0;

    for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
            if(a[i]<a[j]){
                swap(a[i],a[j]);
            }
           }
    }

     for(int i=0;i<n;i++){
        //cout<<a[i]<<"\n";
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]-a[j]==0 || a[i]-a[j]==1 || a[i]-a[j]==-1){
                sum+=1;
            }
        }
            sum=sum+1;

            if(sum>sum1){
               sum1=sum;
               sum=0;
           }
           else{
            sum=0;
           }
          // break;


    }
    cout<<sum1;
    return 0;
}
