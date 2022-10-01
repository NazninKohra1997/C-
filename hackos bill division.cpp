#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    int A;
    cin>>A;

    int Anna;

    int num=0;
     int Bon;
     int cost_per_person;
     int add;
     int total;
     int given;


     int should_give;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>given;

    for(int i=0;i<n;i++){
            //cout<<a[i];
        num=num+a[i];
        if(a[i]==a[A]){
            Anna=a[i];
        }
    }
    //cout<<num<<" "<<Anna;

    Bon=num-Anna;
    //cout<<Bon;

    cost_per_person=Bon/2;
    //cout<<cost_per_person;

    add=Anna/2;
    //cout<<add;

    total=cost_per_person+add;
    //cout<<total;

    should_give=total-cost_per_person;
    //cout<<should_give;

    if(given==total){
        cout<<should_give;
    }
    else{
        cout<<"Bon Appetit";
    }
    return 0;
}
