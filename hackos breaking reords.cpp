#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int i;

    for(i=0;i<n;i++){
       cin>>a[i];
    }

    int high=0;
    int low=0;

    int Max=a[0];
    int Min=a[0];

    for(i=0;i<n;i++){
        if(a[i]>Max){
            Max=a[i];
            high=high+1;
        }
    }

    for(i=0;i<n;i++){
        if(a[i]<Min){
            Min=a[i];
            low=low+1;
        }
    }

    cout<<high<<" ";
    cout<<low;

    return 0;
}
