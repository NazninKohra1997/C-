#include<bits/stdc++.h>
using namespace std;

void fun(int n){
    string s;
    for(int i=0;i<n;i++){
        if(n%i==0 && n%2==0){
             s="NO";
             break;
        }
        else{
            s="YES";
        }
    }
    cout<<s;
}

int main(){
    int n;
    cin>>n;

    int a;

    cin>>a;
    fun(a);


    return 0;
}
