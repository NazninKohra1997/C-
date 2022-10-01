#include<bits/stdc++.h>
using namespace std;

void fun(string s1,string s2){
    string f;
    for(int i=0;i<s1.length();i++){
        for(int j=0;j<s2.length();j++){
            if(s1[i]==s2[j]){
                f="YES";
                break;
            }
            else{
                f="NO";
            }
        }
        if(f=="YES"){
            break;
        }
    }

    cout<<f;
}
int main(){
    int n;
    cin>>n;

    string ss1;
    string ss2;

    for(int i=0;i<n;i++){
    cin>>ss1;
    cin>>ss2;
    fun(ss1,ss2);
    cout<<"\n";
    }
    return 0;
}
