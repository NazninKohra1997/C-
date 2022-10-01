#include<bits/stdc++.h>
using namespace std;

int main(){
    string A[10]={" ","one","two","three","four","five","six","seven","eight","nine"};
    int a,b,n;
    cin>>a>>b;


        for(n=a;n<=b;n++){

                if(n>=1&& n<=9){
            cout<<A[n]<<"\n";
                }
                else if(n>9){
                        if(n%2==0){
                    cout<<"even"<<"\n";
                }
                else if(n%2!=0){
                    cout<<"odd"<<"\n";
                }

            }


        }





    return 0;
}
