#include<bits/stdc++.h>
using namespace std;

int main(){
     string s;
     cin>>s;

     int sum=0;

     for(int i=0;i<s.length();i++){
        if(s[i]=='S' && s[i+1]=='O' && s[i+2]=='S'){
                sum=sum;
            i++;
            i++;
        }
        else if(s[i]!='S' && s[i+1]=='O' && s[i+2]=='S'){
            sum+=1;
            i++;
            i++;
        }
        else if(s[i]=='S' && s[i+1]!='O' && s[i+2]=='S'){
            sum+=1;
            i++;
            i++;
        }
        else if(s[i]=='S' && s[i+1]=='O' && s[i+2]!='S'){
            sum+=1;
            i++;
            i++;
        }

        else if(s[i]=='S' && s[i+1]!='O' && s[i+2]!='S'){
            sum+=2;
            i++;
            i++;
        }
        else if(s[i]!='S' && s[i+1]!='O' && s[i+2]=='S'){
            sum+=2;
            i++;
            i++;
        }
        else if(s[i]!='S' && s[i+1]=='O' && s[i+2]!='S'){
            sum+=2;
            i++;
            i++;
        }
        else{
            sum+=3;
            i++;
            i++;
        }
     }

     cout<<sum;

     return 0;

}
