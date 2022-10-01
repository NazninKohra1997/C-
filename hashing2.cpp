#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[10]={3,7,4,9,12,6,1,11,2,10};

    int H[13],i;
    for(i=0;i<10;i++){
        H[A[i]]++;
    }
    int h=12;
    int l=1;

    for( i=l;i<=h;i++){
        if(H[i]==0){
            cout<<i<<"\n";
        }
    }

    return 0;
}
