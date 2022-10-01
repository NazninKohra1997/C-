#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3];
    int b[3];
    int c[3];
    int Max;

    int sum1=0;
    int sum2=0;
    int sum3=0;
    int sum4;
    int sum5;
    int sum6;
    int sum7;
    int sum8;




    int Final=0;

    for(int i=0;i<3;i++){
        cin>>a[i];
        sum1+=a[i];
    }

     for(int i=0;i<3;i++){
        cin>>b[i];
        sum2+=b[i];
    }

     for(int i=0;i<3;i++){
        cin>>c[i];
        sum3+=c[i];
    }

    sum4=a[0]+b[1]+c[2];
    sum5=a[2]+b[1]+c[0];
    sum6=a[0]+b[0]+c[0];
    sum7=a[1]+b[1]+c[1];
    sum8=a[2]+b[2]+c[2];

    int arr[8]={sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8};

    Max=arr[0];
    for(int i=1;i<8;i++){
    if(arr[i]>Max){
        Max=arr[i];
    }
    }

    //cout<<Max<<" ";

    if(Max>sum1){
        Final=Final+(Max-sum1);
        //cout<<Final<<" ";
    }
     if(Max>sum2){
        Final=Final+(Max-sum2);
       // cout<<Final<<" ";
    }
     if(Max>sum3){
        Final=Final+(Max-sum3);
        //cout<<Final<<" ";
    }

    cout<<Final;
    return 0;


}
