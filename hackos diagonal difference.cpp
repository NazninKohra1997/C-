#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n][n];
    int sum=0;
    //int b[n][n];

    //vector <vector<int>>vec;
    int d1=0,d2=0;

    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            cin>>a[i][j];
            }
    }

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(i==j){
                        d1+=a[i][j];
           // cout<<a[i][j]<<" ";
            //cout<<i<<" "<<j<<" ";
        }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){

               if(i==sum){
                //cout<<a[i][j]<<" ";
                d2+=a[i][j];
               }
               sum+=1;
        }
        sum=0;
    }

    int Final=abs(d1-d2);
    cout<<Final;


    return 0;
}
