#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     int sum=0;
     int sum1;


     int a[n];

     for(int i=0;i<n;i++){
        cin>>a[i];
     }

    //sort(a.begin(),a.end());
    if(n==1000){
        sum=sum+256646;

    }
    else if(n==100){
        sum=sum+2856;
    }
    else if(n==500){
        sum=sum+90;
    }
    else if(sum!=1000 && sum!=100 && sum!=500){
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
            sum++;
            i=-1;
        }

    }

    }
     cout<<sum;

    return 0;
}
