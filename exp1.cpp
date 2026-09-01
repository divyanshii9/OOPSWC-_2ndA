#include<iostream>
using namespace std;
class Student{
private:
      int rollno;
      string name;
      int marks;
public:
     Student(int a,string b,int c){
        cout<<"Student Information: "<<endl;
        rollno=a;
        name=b;
        marks=c;
     }
     void display(){
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
     }

};
int main(){
    int a ,c;
    string b;
    cin>>a;
    cin>>b;
    cin>>c;
    Student s(a,b,c);
    s.display();
    return 0;
}