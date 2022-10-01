#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];



    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
    int n1=1,n2=2,n3=3,n4=4,n5=5;

    for(int i=0;i<n;i++){
        if(a[i]==1){
            sum1+=1;
        }
        else if(a[i]==2){
            sum2+=1;
        }
        else if(a[i]==3){
            sum3+=1;
        }
        else if(a[i]==4){
            sum4+=1;
        }
        else if(a[i]==5){
            sum5+=1;
        }

    }

    if(sum1>sum2 && sum1>sum3 && sum1>sum4 && sum1>sum5){
        cout<<n1;
    }
    else if(sum2>sum1 && sum2>sum3 && sum2>sum4 && sum2>sum5){
        cout<<n2;
    }
    else if(sum3>sum1 && sum3>sum2 && sum3>sum4 && sum3>sum5){
        cout<<n3;
    }
    else if(sum4>sum1 && sum4>sum2 && sum4>sum3 && sum4>sum5){
        cout<<n4;
    }
    else if(sum5>sum1 && sum5>sum2 && sum5>sum3 && sum5>sum4){
       cout<<n5;
    }
    else if((sum1>sum3 && sum1>sum4 && sum1>sum5 && sum1==sum2)||(sum1>sum2 && sum1>sum4 && sum1>sum5 && sum1==sum3)||(sum1>sum2 && sum1>sum3 && sum1>sum5 && sum1==sum4)||(sum1>sum2 && sum1>sum3 && sum1>sum4 && sum1==sum5)){
        cout<<n1;
    }
    else if((sum2>sum1 && sum2>sum4 && sum2>sum5 && sum2==sum3)||(sum2>sum1 && sum2>sum3 && sum2>sum5 && sum2==sum4)||(sum2>sum1 && sum2>sum3 && sum2>sum4 && sum2==sum5)){
        cout<<n2;
    }
    else if((sum3>sum1 && sum3>sum2 && sum3>sum5 && sum3==sum4)||(sum3>sum1 && sum3>sum2 && sum3>sum4 && sum3==sum5)){
        cout<<n3;
    }
    else if((sum4>sum1 && sum4>sum2 && sum4>sum3 && sum4==sum5)){
        cout<<n4;
    }

    return 0;
}
