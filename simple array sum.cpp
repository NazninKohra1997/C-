#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int A[n];
    int total=0;

    for(int i=0;i<n;i++){
            cin>>A[i];
       total=total+A[i];
    }

    cout<<total;

    return 0;

}
