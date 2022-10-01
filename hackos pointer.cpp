#include<bits/stdc++.h>
using namespace std;


    void fun(int *a,int *b){
        int sum,sub;
        sum=*a+*b;
        cout<<sum<<"\n";
        sub=*a-*b;

        if(*b>*a){
        sub=-sub;
        cout<<sub<<"\n";
    }
    else{
        cout<<sub<<"\n";
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    fun(&a,&b);

 return 0;
}
