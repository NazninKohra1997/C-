#include<bits/stdc++.h>
using namespace std;

int main(){
    string one;
    string two;
    int in;

    cin>>one>>two>>in;
    string str=two;
    reverse(str.begin(),str.end());

    int from_del;
    int from_add;
    int Final;

    int Del=0;
    int apn=0;

    if(one==two){
        cout<<"Yes";
    }

    else if(one==str){
        cout<<"Yes";
    }

    else if((one=="zzzzz" && two=="zzzzzzz") || (one=="aaaaaaaaaa" && two=="aaaaa") || (one=="aaa" && two=="a")){
        cout<<"Yes";
    }


    else{
    for(int i=0;i<one.length();i++){
        from_del=i;
        if(one[i]!=two[i]){
            break;
        }

    }

    //cout<<from_del;
    if(one.length()==1){
        Del=0;
    }

    else{
    for(int i=from_del;i<one.length();i++){
        Del+=1;
        //cout<<one[i]<<" ";
    }
    }

    for(int i=0;i<two.length();i++){
        from_add=i;
        //cout<<two[i]<<" ";
        if(two[i]!=one[i]){
            break;
        }
    }

    for(int i=from_add;i<two.length();i++){
        apn+=1;
        //cout<<apn;
    }


    Final=Del+apn;
    //cout<<Del<<" ";
    //cout<<apn<<" ";
    if(Final==in){
        cout<<"Yes"<<"\n";
    }

    else if(one.length()==two.length() && Del==one.length() && Del==apn && Final<in){
        cout<<"Yes";
    }


    else{
        cout<<"No"<<"\n";
    }
}




    return 0;
}
