#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
public:
    string name;
    int age;

        virtual void getdata(){
        cin>>name>>age;
    }
    virtual void putdata(){
        cout<<name<<age;
    }
};



class Professor:public Person{
    static int cur_id2;

public:
    int publications;

    void getdata(){
        cin>>name>>age>>publications;
    }
    void putdata(){
        cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id2<<"\n";
        cur_id2++;
    }
} ;
int Professor::cur_id2=1;

class Student:public Person{
    static int cur_id1;
public:
    int marks[6];

    void getdata(){
        cin>>name>>age;
        for(int i=0;i<6;i++){
            cin>>marks[i];
        }
    }
    void putdata(){
        cout<<name<<" "<<age<<" ";
        int total=0;
        for(int i=0;i<6;i++){
            total=total+marks[i];
        }
        cout<<total<<" "<<cur_id1<<"\n";
        cur_id1++;
    }
};
int Student::cur_id1=1;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
