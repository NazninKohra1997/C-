#include<bits/stdc++.h>
using namespace std;

int main(){
    int page_number;
    int turn_to;

    cin>>page_number;
    cin>>turn_to;

    int right;
    int left;

    if(turn_to==1 || turn_to==page_number){
        cout<<0;
    }
    else if(page_number%2==0 && turn_to%2!=0 && turn_to==page_number-1){
        cout<<1;
    }
    else {
        right=turn_to/2;
        left=(page_number-turn_to)/2;

       if(right<left){
        cout<<right;
       }
       else{
        cout<<left;
       }
    }

    return 0;

}
