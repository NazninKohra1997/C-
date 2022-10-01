#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int sum=1;

    //char arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','y','Z'};

    for(int i=0;i<s.length();i++){
        //for(int j=0;j<26;j++){
            if(s[i]<97){
                //cout<<s[i]<<" ";
                sum+=1;
            }
       // }
        //if(i=='A'|| i=='B' || i=='C'|| i=='D'|| i=='E'|| i=='F'|| i=='G'|| i=='H'|| i=='I'|| i=='J'|| i=='K'|| i=='L'|| i=='M'|| i=='N'||i=='O'|| i=='P'|| i=='Q'|| i=='R'|| i=='S'|| i=='T'||i=='U'||i=='V'||i=='W'||i=='X'||i=='y'||i=='Z'){

        //}
    }

    cout<<sum;
    return 0;
}
