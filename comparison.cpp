#include<bits/stdc++.h>
using namespace std;

int main(){
    char A[]="jhora";
    char B[]="jhoraa";
    int i,j;

    for(i=0,j=0;A[i]!='\0'&&A[j]!='\0';i++,j++){
        if(A[i]!=A[j]){
            break;
        }
    }
        if(A[i]==A[j]){
            cout<<"equal";
        }
        else if(A[i]<A[j]){
            cout<<"smaller";
        }
        else{
            cout<<"greater";
        }


    return 0;
}
