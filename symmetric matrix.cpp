#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    int A[n*n];

    for (int i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>A[i][j];
        }
    }

     for (int i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout>>A[i][j]<<" ";
        }

        cout<<"\n";
    }

    return 0;

}
