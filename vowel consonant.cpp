#include<bits/stdc++.h>
using namespace std;

int main(){
    char A[]="elephant";
    int vowel=0;
    int consonant=0;

    for(int i=0;A[i]!='\0';i++){
        if(A[i]=='a'|| A[i]=='e' ||A[i]=='i'|| A[i]=='o'|| A[i]=='u'){
          vowel++;
        }
        else{
            consonant++;
        }

    }
    cout<<vowel<<"\n";
    cout<<consonant;

    return 0;
}
