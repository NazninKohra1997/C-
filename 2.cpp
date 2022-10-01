#include<bits/stdc++.h>
using namespace std;

int main(){
    long int a[5];

    for(long int i=0;i<5;i++){
        cin>>a[i];
    }

    long int sum1,sum2,sum3,sum4,sum5;

    sum1=a[1]+a[2]+a[3]+a[4];
    sum2=a[0]+a[2]+a[3]+a[4];
    sum3=a[0]+a[1]+a[3]+a[4];
    sum4=a[0]+a[1]+a[2]+a[4];
    sum5=a[0]+a[1]+a[2]+a[3];

    if(sum1<sum2&&sum1<sum3&&sum1<sum4&&sum1<sum5){
        cout<<sum1<<" ";
    }
    else if(sum2<sum1&&sum2<sum3&&sum2<sum4&&sum2<sum5){
        cout<<sum2<<" ";
    }
     else if(sum3<sum1&&sum3<sum2&&sum3<sum4&&sum3<sum5){
        cout<<sum3<<" ";
    }
    else if(sum4<sum1&&sum4<sum2&&sum4<sum3&&sum4<sum5){
        cout<<sum4<<" ";
    }
    else if(sum5<sum1&&sum5<sum2&&sum5<sum3&&sum5<sum4){
        cout<<sum5<<" ";
    }



    if(sum1>sum2&&sum1>sum3&&sum1>sum4&&sum1>sum5){
       cout<<sum1<<" ";
    }
    else if(sum2>sum1&&sum2>sum3&&sum2>sum4&&sum2>sum5){
       cout<<sum2<<" ";
    }
    else if(sum3>sum1&&sum3>sum2&&sum3>sum4&&sum3>sum5){
       cout<<sum3<<" ";
    }
    else if(sum4>sum1&&sum4>sum2&&sum4>sum3&&sum4>sum5){
       cout<<sum4<<" ";
    }
    else if(sum5>sum1&&sum5>sum2&&sum5>sum3&&sum5>sum4){
       cout<<sum5<<" ";
    }

    if(sum1==sum2&&sum1==sum3&&sum1==sum4&&sum1==sum5&&sum2==sum3&&sum2==sum4&&sum2==sum5&&sum3==sum4&&sum3==sum5&&sum4==sum5){
        cout<<sum1<<" ";
        cout<<sum5<<" ";
    }

    return 0;

}
