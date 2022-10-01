#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10]={2,7,10,8,8,5,3,9,2,11};
    int H[12];

    int h=11;
    int l=1;

    for(int i=0;i<10;i++){
        H[a[i]]++;
    }

    for(int i=1;i<=12;i++){
        if(H[i]>1){
            cout<<i<<"\n";
        }
    }


    return 0;


}
