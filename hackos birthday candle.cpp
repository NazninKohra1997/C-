#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int i;
    int sum=1;

    for(i=0;i<n;i++){
        cin>>a[i];
    }
  for(i=0;i<n;i++){
    if(a[0]<a[i]){
        swap(a[0],a[i]);
    }
  }

  //cout<<a[0]<<"\n";

  for(i=1;i<n;i++){
    if(a[0]==a[i]){
        sum=sum+1;
    }
  }
  cout<<sum;
  return 0;
}
