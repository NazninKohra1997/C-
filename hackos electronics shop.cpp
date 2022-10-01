#include<bits/stdc++.h>
using namespace std;

int main (){
    int b;
    int m;
    int n;

    cin>>b>>m>>n;

    int key[m];
    int dri[n];

    for(int i=0;i<m;i++){
        cin>>key[i];
    }


    for(int i=0;i<n;i++){
        cin>>dri[i];
    }


     int Max=key[0]+dri[0];

     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                if(key[i]+dri[j]<b || key[i]+dri[j]==b){
                 if(key[i]+dri[j]>Max){
                    Max=key[i]+dri[j];
                }
                }
                 else if(Max<b || Max==b){
                    Max=Max;
                 }
                else{
                    Max=-1;
                   }



        }


     }


    cout<<Max;

    return 0;
}
