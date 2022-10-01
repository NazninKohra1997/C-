#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10]={3,7,4,9,12,6,1,11,2,10};
   int x=10;
int counts[x+1];

for(int i =0;i<=x; i++){
    counts[a[i]]++;
   // if(counts[a[i]] == 2)
       // cout<<”Duplicate element: “<<a[i];  //I realized I could find this here
}

for(int j=0; j<=x; j++){
    if(counts[j] == 0)
        cout<<"Missing element: "<<j;
    //if(counts[j] == 2)
    //  cout<<”Duplicate element: “<<j;   //No longer needed here.
}

return 0;
}
