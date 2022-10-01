#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sum=0;
    cin>>n;

    int a[n];
    int sum2;
    int total=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }




    for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j] && a[i]>0){
                    sum+=1;
                    //cout<<a[i]<<" ";
                   a[i]=0;
                   a[j]=0;
                  }

              }
        }

    cout<<sum;
    return 0;
}
