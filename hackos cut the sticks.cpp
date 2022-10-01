#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<n<<"\n";

    int a[n];
    int New;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

   int aa=n;

    //int Min=a[0];
    int Max=0;

for(int j=0;j<n;j++){
       int Min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<Min){
            Min=a[i];
        }
    }
    //cout<<Min;


   for(int i=0;i<n;i++){
        New=a[i]-Min;

        if(New!=0){
          a[i]=New;

         // Max+=1;
     cout<<a[i]<<" ";

    }
    else{
        aa=aa-1;

    }
    }
    cout<<"\n";
    if(aa==1){
        break;
    }

    //cout<<Max<<"\n";
    //Max=0;

}
    return 0;
}
