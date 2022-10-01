#include<bits/stdc++.h>
using namespace std;

int main(){
    char A[]="Hello World! I wanna meet you.";

    int word=1;
    int w;
    int i;

    for(i=0;A[i]!='\0';i++){
        if(A[i]==' ' && A[i-1]!=' '){
           word=word+1;
        }

    }

    cout<<word;

    return 0;
}
