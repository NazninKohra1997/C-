#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3];
    int b[3];

    int Alice=0;
    int Bob=0;
    int i,j;

    for(i=0;i<3;i++){
            cin>>a[i];
    }
        for(j=0;j<3;j++){
            cin>>b[j];
        }

        for(int k=0;k<3;k++){
            if(a[k]>b[k]){
                Alice=Alice+1;
            }
            else if(b[k]>a[k]){
                Bob=Bob+1;
            }
            else{
                Alice=Alice+0;
                Bob=Bob+0;
            }
        }


            cout<<Alice<<" ";
            cout<<Bob;

    return 0;
}
