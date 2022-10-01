#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int prisoner;
    int sweet;
    int chair;


   cin>>n;
    for(int i=0;i<n;i++){
     cin>>prisoner>>sweet>>chair;



     int left=sweet+chair-1;
    // cout<<left;



      int Final=left%prisoner;
      //cout<<Final<<"\n";

      if(!Final){
        cout<<prisoner<<"\n";
      }

      else{
        cout<<Final<<"\n";
      }
   }

        return 0;
    }
