#include<bits/stdc++.h>
using namespace std;

void split(string s){
    stringstream ss(s);
    //string word1;

    while(ss>>s){
        cout<<s<<"\n";
    }
}

int main(){
    string word;
    cin>>word;
    split(word);
    cout<<"\n";

    return 0;
}
