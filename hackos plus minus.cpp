#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    int j,k;

    float sum1=0,sum2=0,sum3=0;



    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]==0){
            sum3+=1;
        }
        else if(a[i]-1>-a[i]){
            sum2+=1;
        }
        else{
            sum1+=1;
        }
}


printf("%.6f\n",sum1/n);
printf("%.6f\n",sum2/n);
printf("%.6f\n",sum3/n);

}
