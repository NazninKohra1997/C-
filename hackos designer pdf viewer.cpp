#include<bits/stdc++.h>
using namespace std;

int main(){

    vector <int> vec;
    int a[26];
    string s;

    for(int i=0;i<26;i++){
       cin>>a[i];

    }

    cin>>s;
    int length=s.length();
    //cout<<length;
    //cout<<s;


    int T;
    string alpha="abcdefghijklmnopqrstuvwxyz";

    int length1=alpha.length();

    for(int i=0;i<length;i++){
        for(int j=0;j<length1;j++){
            if(s[i]==alpha[j]){
                T=a[j];
              vec.push_back(T);

            }
        }
    }


    int Max=vec[0];

    for(int i=0;i<vec.size();i++){
        //cout<<vec[i]<<"\n";
        if(vec[i]>Max){
            Max=vec[i];
        }
    }


    //cout<<Max;

    int Final=Max*length;
    cout<<Final;
    return 0;

}
