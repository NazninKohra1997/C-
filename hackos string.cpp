#include<bits/stdc++.h>
using namespace std;

void Swap(char *x,char *y){
       char temp=*x;
       *x=*y;
       *y=*x;
   }

int main(){
    string a,b;
    cin>>a>>b;

    int len1=a.size();
    int len2=b.size();

    cout<<len1<<" ";
    cout<<len2<<"\n";

    string c;
    c=a+b;
    cout<<c<<"\n";



   swap(a[0],b[0]);
   cout<<a<<" ";
   cout<<b<<"\n";


    return 0;

}
