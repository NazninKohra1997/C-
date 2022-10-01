#include<bits/stdc++.h>
using namespace std;

void fun(string s){
       int sum=0;

    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            sum++;
        }
    }

    cout<<sum;
}

int main(){
    int n;
    cin>>n;
    string ss;

    for(int i=0;i<n;i++){
    cin>>ss;
    fun(ss);
    cout<<"\n";

}

   return 0;
}
