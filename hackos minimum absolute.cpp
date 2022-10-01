#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int Min=abs(a[0]-a[1]);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]!=a[j] && abs(a[i]-a[j])<Min){
                Min=abs(a[i]-a[j]);
            }
        }
    }

    cout<<Min;
    return 0;
}


