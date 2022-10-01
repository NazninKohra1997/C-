#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,t;
    cin>>s>>t;

    int a,b;
   cin>>a>>b;

    int m,n;
    cin>>m>>n;

    int apple[m];
    int orange[n];

    int i,j;

    for(i=0;i<m;i++){
        cin>>apple[i];
    }

    for(j=0;j<n;j++){
        cin>>orange[j];
    }

    int sum1=0;
    int sum2=0;


   for(i=0;i<m;i++){
          a+apple[i];
        if((a+apple[i])>=s && (a+apple[i])<=t){
           sum1=sum1+1;
       }
    }
     cout<<sum1<<"\n";


    for(j=0;j<n;j++){
        b+orange[j];
        if((b+orange[j])>=s && (b+orange[j])<=t){
           sum2=sum2+1;
       }
  }
    cout<<sum2<<"\n";



    return 0;


}
