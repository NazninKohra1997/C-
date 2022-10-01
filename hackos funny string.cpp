#include<bits/stdc++.h>
using namespace std;

void fun(string s){
    int p[s.length()];
    int q[s.length()];
    string v;

    for(int j=0;j<s.length()-1;j++){
            p[j]=abs(s[j+1]-s[j]);
            //cout<<p[j]<<" ";
    }

    //cout<<"\n";

    reverse(s.begin(),s.end());

    for(int i=0;i<s.length()-1;i++){
        q[i]=abs(s[i+1]-s[i]);
        //cout<<q[i]<<" ";
    }

    for(int i=0;i<s.length()-1;i++){
       if(p[i]==q[i]){
        v="Funny";
       }
       else{
        v="Not Funny";
        break;
       }
    }

    cout<<v;
}

int main(){
    int n;
    cin>>n;

    string x;

    for(int i=0;i<n;i++){
        cin>>x;
        fun(x);
        cout<<"\n";
    }
    return 0;

}
