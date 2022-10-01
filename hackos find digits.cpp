#include<bits/stdc++.h>
using namespace std;

int main(){
     int n,m;
     stringstream str;
     //cin>>m;


    //for(int j=0;j<m;j++){
            cin>>n;
     string st=to_string(n);
     int len=st.length();
     int sum=0;
     int b[len];


     for(int i=0;i<st.length();i++){
              str<<st[i];
              //int b[i];
              str>>b[i];
              cout<<b[i]<<" ";
     }

     //cout<<sum<<"\n";
     sum=0;
   // }
     return 0;


}
