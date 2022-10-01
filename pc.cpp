#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    int m,o;;
    cin>>n;

    int sum=0;
    for(int u=0;u<n;u++){

        cin>>m>>o;


    int a[m];

    for(int i=0;i<m;i++){
        cin>>a[i];
        //cout<<a[i]<<"\n";
    }

    for(int i=0;i<m;i++){
        if(a[i]<=0){
            sum+=1;
        }
    }

    //cout<<sum<<"\n";
    if(sum<o){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    sum=0;
    }

    return 0;
}
