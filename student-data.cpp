//student data
#include <iostream>
using namespace std;
class student
{
    private:
    string name,reg_no;
    int age,marks;
    char grade;

    public:
    void getstudentData()
    {
        cout<<"Enter student name:";
        getline(cin,name);
        cout<<"Enter student reg_no:";
        getline(cin,reg_no);
        cout<<"Enter student age:";
        cin>>age;
        cout<<"Enter student marks:";
        cin>>marks;
       
    }
    void getstudentGrade()
    {
       if(marks>=70 && marks<=100)
       { 
          grade='A';
       }
       else if(marks>=60 && marks<70)
       {
           grade='B';
       }
       else if(marks>=50 && marks<60)
       { 
           grade='C';
       }
       else if(marks>=40 && marks<50)
       {
            grade='D';
       }
       else 
       {
         grade='E';
       }
    }
    void displaystudentData()
    {
        cout<<"Student name:"<<name<<"\n";
        cout<<"Student reg_no:"<<reg_no<<"\n";
        cout<<"Student age:"<<age<<"\n";
        cout<<"Student marks:"<<marks<<"\n";
        cout<<"Student grade:"<<grade<<"\n";
    }
};

int main()
{
    student s1;
    cout<<"Enter the details of student 1"<<"\n";
    cout<<"*******************************"<<"\n";
    s1.getstudentData();
    s1.getstudentGrade();
    s1.displaystudentData();
    return 0;
}