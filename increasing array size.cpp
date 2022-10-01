#include<bits/stdc++.h>
using namespace std;

int main(){
    int *p,*q;
    p=new int[5];
    q=new int[10];

   // p[0]=10;
    //p[1]=11;
    //p[2]=12;
    //p[3]=13;
    //p[4]=14;

    for(int i=0;i<5;i++){
        q[i]=p[i];
    }

    delete []p;
    p=q;
    q=NULL;

    p[0]=10;
    p[1]=11;
    p[2]=12;
    p[3]=13;
    p[4]=14;
    p[5]=15;
    p[6]=16;
    p[7]=17;
    p[8]=18;
    p[9]=19;

    for(int j=0;j<10;j++){
        cout<<p[j]<<"\n";
    }

    return 0;
}
