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
        if(a[i+1]==0){
            i++;
            sum+=1;
        }
        else if{
            i++;
            i++;
            sum++;
        }
        cout<<i<<" ";
    }

    //cout<<sum;

    return 0;
}
