#include<stdio.h>


int XOR(int i,int j){
    if(i==1 && j==1){
       return 0;
    }
    else if(i==0 && j==0){
        return 0;
    }
    else{
        return 1;
    }
}


int main(){
    int x,y;
    scanf("%d%d",&x,&y);

   int a=XOR(x,y);
    printf("%d\n",a);

    return 0;
}
