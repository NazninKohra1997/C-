#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    string s1;

    cin>>s;
    s1=s;
    string n1=s;

    string f1;
    string f2;
    string f3;
    string f4;
    string f5;
    string f6;

    int l1,l2,l3,l4,l5,l6;

    string new1;
    string new2;
    string new3;
    string new4;



    for(int j=0;j<s.length();j++){
    for(int i=j+1;i<s.length();i++){
        if(s[j]==s[i]){
            s.erase(j,1);
            j=-1;
        }
    }
    }


        for(int j=0;j<s1.length();j++){
            if(s1[j]==s[0] || s1[j]==s[1]){
                s1.erase(j,1);
                j=-1;
                f1=s1;
            }
}

       s1=n1;
        //cout<<s1;
         for(int j=0;j<s1.length();j++){
         if(s1[j]==s[0] || s1[j]==s[2]){
                s1.erase(j,1);
                j=-1;
                f2=s1;
            }
         }

         s1=n1;
         for(int j=0;j<s1.length();j++){
         if(s1[j]==s[0] || s1[j]==s[3]){
                s1.erase(j,1);
                j=-1;
                f3=s1;
            }
         }

          s1=n1;
         for(int j=0;j<s1.length();j++){
         if(s1[j]==s[1] || s1[j]==s[2]){
                s1.erase(j,1);
                j=-1;
                f4=s1;
            }
         }


          s1=n1;
         for(int j=0;j<s1.length();j++){
         if(s1[j]==s[1] || s1[j]==s[3]){
                s1.erase(j,1);
                j=-1;
                f5=s1;
            }
         }

          s1=n1;
         for(int j=0;j<s1.length();j++){
         if(s1[j]==s[2] || s1[j]==s[3]){
                s1.erase(j,1);
                j=-1;
                f6=s1;
            }
         }

        // cout<<f1<<" "<<f2<<" "<<f3<<" "<<f4<<" "<<f5<<" "<<f6;

         for(int i=0;i<f1.length();i++){
            if(f1[i]!=f1[i+1]){
                f1=f1;
            }
            else{
                f1="null";
                break;
            }
         }

         for(int i=0;i<f2.length();i++){
            if(f2[i]!=f2[i+1]){
                f2=f2;
            }
            else{
                f2="null";
                break;
            }
         }

         for(int i=0;i<f3.length();i++){
            if(f3[i]!=f3[i+1]){
                f3=f3;
            }
            else{
                f3="null";
                break;
            }
         }

         for(int i=0;i<f4.length();i++){
            if(f4[i]!=f4[i+1]){
                f4=f4;
            }
            else{
                f4="null";
                break;
            }
         }

         for(int i=0;i<f5.length();i++){
            if(f5[i]!=f5[i+1]){
                f5=f5;
            }
            else{
                f5="null";
                break;
            }
         }

         for(int i=0;i<f6.length();i++){
            if(f6[i]!=f6[i+1]){
                f6=f6;
            }
            else{
                f6="null";
                break;
            }
         }

          l1=f1.length();
          l2=f2.length();
          l3=f3.length();
          l4=f4.length();
          l5=f5.length();
          l6=f6.length();

         if(f1=="null"){
         l1=0;
         }
         if(f2=="null"){
         l2=0;
         }
         if(f3=="null"){
         l3=0;
         }
         if(f4=="null"){
         l4=0;
         }
         if(f5=="null"){
         l5=0;
         }
         if(f6=="null"){
         l6=0;
         }

         int arr[6]={l1,l2,l3,l4,l5,l6};
         int Max=arr[0];

         for(int i=1;i<6;i++){
            if(arr[i]>Max){
                Max=arr[i];
            }
         }

         cout<<Max;


    return 0;
}
