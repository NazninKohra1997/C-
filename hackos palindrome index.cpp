#include<bits/stdc++.h>
using namespace std;

void fun(string s){
    int sum=-1;


    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-1-i]){
           sum=i;
        }
    }



    cout<<sum;

}

int main(){
     string ss;
     int n;
     cin>>n;

     for(int i=0;i<n;i++){
        cin>>ss;
     fun(ss);
     cout<<"\n";
     }
      return 0;
}
