#include<bits/stdc++.h>
using namespace std;

void fun(string s){
    string h1="hackerrank";
     int i=0;
    int sum=0;

    for(int j=0;j<s.length();j++){
        if(h1[i]==s[j]){
            i++;
            sum++;
        }
    }

    if(sum==10){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
    string s;
    cin>>s;
    fun(s);
    }
    return 0;
}
