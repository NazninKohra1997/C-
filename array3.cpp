#include<bits/stdc++.h>
using namespace std;

int main(){
    int *p;
    p=new int[6];

    p[0]=30;
    p[1]=31;
    p[2]=33;
    p[3]=47;
    p[4]=58;
    p[5]=99;

    for(int i=0;i<6;i++){
        cout<<p[i]<<endl;
    }

    return 0;
}
