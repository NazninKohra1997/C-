#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[6]={10,20,30,40,50,60};
    int *p;

    p=new int[5];

    p[0]=10;
    p[1]=20;
    p[2]=30;
    p[3]=40;
    p[4]=50;
    p[5]=60;


    for(int i=0;i<6;i++){
        cout<<p[i]<<"\n";
    }

    return 0;
}
