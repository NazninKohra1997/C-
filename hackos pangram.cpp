#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum=0;
    string s;
    cin>>s;


    string p="abcdefghijklmnopqrstuvwxyz";

    for(int i=0;i<p.length();i++){
        for(int j=0;j<s.length();j++){
                char c=(char)tolower(s[j]);
            if(p[i]==c){
                sum++;
        cout<<c;
            }
        }
    }

    if(sum==26 || sum>26){
        cout<<"pangram";
    }
    else{
        cout<<"not pangram";
    }

    return 0;
}
