#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int sum4=0;

   // for(int i=0;i<n;i++){
       // cin>>s[i];
    //}

    cin>>s;
    //cout<<s;
    for(int i=0;i<s.length();i++){
        //cout<<s[i];
        if(s[i]>=97 && s[i]<=122){
            sum1+=1;
            //cout<<s[i];
        }
        else if(s[i]>=65 && s[i]<=90){
                sum2+=1;
        }

        else if(s[i]=='!' || s[i]=='@' || s[i]=='#' || s[i]=='$' || s[i]=='%' || s[i]=='(' || s[i]==')' || s[i]=='^' || s[i]=='&'|| s[i]=='*' || s[i]=='-' || s[i]=='+'){
            sum3+=1;
        }
        else if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9'){
            sum4+=1;
        }
    }


   if(sum1>=1){
    sum1=1;
   }
   if(sum2>=1){
    sum2=1;
   }
   if(sum3>=1){
    sum3=1;
   }
   if(sum4>=1){
    sum4=1;
   }

   int New=sum1+sum2+sum3+sum4;
   //cout<<New;

   if(n>=6){
    cout<<4-New;
   }

   else{
    if(4-New+n>=6){
        cout<<4-New;
    }
    else{
        cout<<4-New+(6-(n+4-New));
    }
   }

   return 0;
}


