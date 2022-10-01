#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    int l;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            a.erase(i,1)
        }
        i=-1;
    }
    cout<<l;
    return 0;
}
