#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[1000];
    int N,i;
    cin>>N;

    for(i=1;i<=N;i++){
        cin>>A[i];
    }
    for(i=N;i>=1;i--){
        cout<<A[i]<<" ";
    }

 return 0;


}
