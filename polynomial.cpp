#include<bits/stdc++.h>
using namespace std;

class polynomial{
public:
    int ele;
    int exp;
    int terms;
    int Tterms;

    int pow(int ele,int exp);
    int display();
};

int polynomial::pow(int ele,int exp){
    int l=1;
    for(int i=0;i<exp;i++){
        l=l*ele;
    }
    return l;

}

int polynomial::display(){
    int y;

    int m=pow(ele,exp);
    y=terms*m;

   return y;
}





int main(){
    polynomial l;

    cout<<"Number of total terms:"<<"\n";
    cin>>l.Tterms;
    cout<<"\n";


cout<<"Terms,elements and exponential:"<<"\n";

 int final;
 int sum=0;



for(int i=0;i<l.Tterms;i++){
        cin>>l.terms>>l.ele>>l.exp;
        for(int j=0;j<l.Tterms;j++){



       final=l.display();
        }
       sum=sum+final;

}

cout<<"\n";
cout<<"Total sum:"<<"\n";
cout<<sum;

    return 0;
}
