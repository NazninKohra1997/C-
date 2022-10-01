#include<bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cin>>year;
    int day;
    int final_day;


    if(year>=1700 && year<=1917){
       if(year%4==0){
       day= 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
       }
       else{
       day= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
       }
    }

    else if(year==1918 ){
       if(year%400==0){
       day= 31 + 16 + 31 + 30 + 31 + 30 + 31 + 31;
       }
       else if(year%4==0 && year%100!=0){
       day= 31 + 16 + 31 + 30 + 31 + 30 + 31 + 31;
       }
       else{
       day= 31 + 15 + 31 + 30 + 31 + 30 + 31 + 31;
    }
    }

    else{
       if((year%400==0)||(year%4==0 && year%100!=0)){
       day= 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
       }
       else{
       day= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
    }
    }
    final_day=256-day;

    cout<<final_day<<"."<<"09."<<year;

    return 0;
}
