#include<bits/stdc++.h>
using namespace std;

//int main(){

      //string s="abcdefghijklmnopqrstuvwxyz";
      void leftrotate(string &s1,int n){
      reverse(s1.begin(),s1.begin()+n);
     reverse(s1.begin()+n,s1.end());
     reverse(s1.begin(),s1.end());
      }

      void rightrotate(string &s1,int n){
          leftrotate(s1,s1.length()-n);
      }


     int main(){
         int m;
         cin>>m;

         string New;
         cin>>New;


         int p;
         cin>>p;

         string s="abcdefghijklmnopqrstuvwxyz";
         string s2=s;
         leftrotate(s,p);
         //rightrotate(s,2);
         string s3=s;
      //cout<<s2<<" "<<s3;
     /* s2[0]=s3[0];
      s2[1]=s3[1];
      s2[2]=s3[2];
      s2[3]=s3[3];
      s2[4]=s3[4];
      s2[5]=s3[5];
      s2[6]=s3[6];
      s2[7]=s3[7];
      s2[8]=s3[8];
      s2[9]=s3[9];
      s2[10]=s3[10];
      s2[11]=s3[11];
      s2[12]=s3[12];
      s2[13]=s3[13];
      s2[14]=s3[14];
      s2[15]=s3[15];
      s2[16]=s3[16];
      s2[17]=s3[17];
      s2[18]=s3[18];
      s2[19]=s3[19];
      s2[20]=s3[20];
      s2[21]=s3[21];
      s2[22]=s3[22];
      s2[23]=s3[23];
      s2[24]=s3[24];
      s2[25]=s3[25];


     // cout<<s2[25];*/

      string c2="";


      //cout<<s2<<" "<<s3;

      for(int i=0;i<New.length();i++){
            for(int j=0;j<s2.length();j++){
               if((char)tolower(New[i])==s2[j]){
                  // New[i]=s3[j];
                    //cout<<s3[j]<<" ";
                    //cout<<New[i];
                    if(New[i]>=97 && New[i]<=122){

                    c2+=s3[j];
                    }

                    else{
                        c2+=(char)toupper(s3[j]);
                    }





              }

             else if((New[i]>=33 && New[i]<=64) || (New[i]>=91 && New[i]<=96) || (New[i]>=123 && New[i]<=126)){
                c2+=New[i];
                break;
              }



            }



      }

      cout<<c2;
     //cout<<New;

    return 0;
}

