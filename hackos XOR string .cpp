#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a;
    cin>>b;

    string s="";

    for(int i=0;i<a.length();i++){
        if(a[i]==b[i]){
            s=s+'0';
        }
        else{
            s=s+'1';
        }
    }

    cout<<s;
    return 0;
}
