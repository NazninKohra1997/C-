#include<bits/stdc++.h>
using namespace std;

int main(){
    char A[]="welcome";
    char B[]="WELCOME";

    int i;
    int j;

    for(i=0;A[i]!='\0';i++){
            A[i]=A[i]-32;
            cout<<A[i];
   }
   cout<<"\n";

   for(j=0;A[j]!='\0';j++){
    B[j]=B[j]+32;
    cout<<B[j];
   }

   return 0;

}
