#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    long length=s.length();
    string m=s;
    long sum=0;

   long n;
   cin>>n;

   long New=n/length;




   for(long i=0;i<New-1;i++){
     m+=s;
   }

   long New2=n-m.length();

   string s1=m+m.substr(0,New2);


   for(long i=0;i<s1.length();i++){
    if(s1[i]=='a'){
        sum+=1;
    }
   }

   cout<<sum;

   return 0;

}
