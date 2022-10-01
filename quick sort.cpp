#include<bits/stdc++.h>
using namespace std;

void Swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int quick(int A[],int l,int h){
    int i,j;
    int pivot=A[l]
    i=l;
    j=h;
    do{
        do{i++}while (i<j);
        do{j--}while (j<i);
        if(i<j){
            Swap(A[i],A[j]);
        }
    }while(i<j);
        Swap(A[l],A[h]);
        return j;
}

int main(){
    int A[]={70,60,90,40,80,10,20,30};

}
