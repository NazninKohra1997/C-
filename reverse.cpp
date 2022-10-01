#include<bits/stdc++.h>
using namespace std;

int main(){
    char A[]="elephant";
    char temp;
    int i,j;
     for(j=0;A[j]!='\0';j++){

     }
     j=j-1;
    for(i=0;i<j;i++,j--){
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }

    cout<<A;
    return 0;
}
