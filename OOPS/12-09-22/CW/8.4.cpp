/* Design a base class called Student with two fields:- (i) Name (ii) roll number. Derive two classes called Sports and Exam from the Student
 base class. Class Sports has a field called s_grade and class Exam has a field called e_grade which are integer fields. Derive a class called
 Results which inherit from Sports and Exam. This class has a character array or string field to represent the final result. Also it has a member
  function called display which can be used to display the final result. Illustrate the usage of these classes in main.*/
#include <iostream>
#include <string>
using namespace std;
class student
{
protected:
    int roll_no;
    string name;
public:
    void get_no(int a)
    {
        roll_no = a;
    }
    void get_name(string n)
    {
        name = n;
    }
};
class exam : virtual public student
{
protected:
    int e_grade; 
public:
    void get_egrade(int a)
    {
        e_grade = a;
    }
};
class sports : virtual public student
{
protected:
    int s_grade;
public:
    void get_sgrade(int a)
    {
        s_grade = a;
    }
};
class result : public exam, public sports
{
    int total;
public:
    void display()
    {
        total = e_grade + s_grade;
        cout << "Total marks scored by " << name << " roll no " << roll_no << " is " << total;
    }
};
int main()
{
    result r;
    string name;
    cout << "Enter the name of the student- ";
    cin >> name;
    r.get_name(name);
    r.get_no(13);
    r.get_egrade(40);
    r.get_sgrade(45);
    r.display();
    return 0;
}