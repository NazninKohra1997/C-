#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

     int sum=0;
     int s;

    for(int m=0;m<n;m++){
    int b[n];



    for(int i=0;i<n;i++){
        cin>>b[i];
        s=b[i];

    }

    //cout<<b[0]<<"\n";
    //cout<<b[n-1]<<"\n";

    int k=b[0];

    int a[k];

    for(int i=0;i<k;i++){
        cin>>a[i];
        //cout<<a[i]<<"\n";
    }



    for(int i=0;i<k;i++){
        if(a[i]<=0){
            sum+=1;
        }
    }

    //cout<<sum;
    if(sum<s){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    sum=0;
    }


    return 0;

}
