#include<bits/stdc++.h>
using namespace std;

int main(){
    int take_month;
    int take_date;
    int take_year;

    int ret_date;
    int ret_month;
    int ret_year;


    cin>>ret_date>>ret_month>>ret_year;
    cin>>take_date>>take_month>>take_year;

    if(ret_date>take_date && take_month==ret_month && take_date!=ret_date && ret_year==take_year){
        cout<< (ret_date-take_date)*15;
    }
    else if(ret_month>take_month && take_month!=ret_month && ret_year==take_year){
        cout<<(ret_month-take_month)*500;
    }
    else if(ret_year!=take_year && ret_year>take_year){
        cout<<(ret_year-take_year)*10000;
    }
    else{
        cout<<0;
    }

    return 0;
}
