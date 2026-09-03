#include<bits/stdc++.h>
using namespace std;
class student{
private:
    string name;
    int marks;
public:
    student(){
        cout<<"Default Constructor: ";
    }
    student(string a,int b){
        name=a;
        marks=b;
    }
    student(const student &s){
        name=s.name;
        marks=s.marks;
    }
    void show(){
        cout<<name;
        cout<<marks;
    }
};
int main(){
    student s1("vikas",90);
    student s2=s1;
    s1.show();
    s2.show();
}