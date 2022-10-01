#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string a;

    cin>>a;

    int up=0;
    int down=0;

    int valley;


    for(int i=0;i<n;i++){
           if(a[i]=='D' && a[i+1]=='U'){
               up+=1;
           }
           else if(a[i]=='U' && a[i+1]=='D'){
               down+=1;
           }
           i+2;
        }

        //cout<<up<<" "<<down<<" ";

       if(up==down){
        valley=1;
       }
       else if(up>down){
        valley=up-down;
       }
       else{
        valley=down-up;
       }

       cout<<valley;

       return 0;

}
