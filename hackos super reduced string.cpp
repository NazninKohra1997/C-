#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n;
    string s1;
    int sum=0;


    for(int i=0;i<s.length();i++){

            if(s[i]==s[i+1]){
                  s.erase(i,2);
                  sum+=1;
                  i=-1;
            }
}
    //cout<<s.length();
    if(s.length()>0){
    cout<<s;
    }
    else{
        cout<<"Empty String";
    }
   return 0;
}
