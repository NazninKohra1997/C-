#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    int scores;

    int score1;
    int score2;
    int score3;
    int score4;
    int score5;


    void input(){

        cin>>score1>>score2>>score3>>score4>>score5;
    }

    int calculateTotalScore(){
        scores=score1+score2+score3+score4+score5;
         return scores;
    }
};

int main(){
    Student st;
    int number;
    cin>>number;

    for(int i=0;i<number;i++){
        st.input();
        cout<<st.calculateTotalScore();
    }

   return 0;
}
