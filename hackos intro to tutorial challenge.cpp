#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int m;
    cin>>m;

    int a[m];

    for(int i=0;i<m;i++){
        cin>>a[i];
    }

    for(int i=0;i<m;i++){
        if(a[i]==n){
            cout<<i;
        }
    }

    return 0;
}
