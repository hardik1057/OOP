/*WAP to represent a student class with roll no, name and section and a test class (derived class of student) representing the scores of the 
student in 5 subjects and sport class (derived class of student) representing the score in a sport. The sport and test class should be inherited
 by a result class having the functionality to add the scores and display the final result for a student.*/
#include <iostream>
#include <string>
using namespace std;
class student
{
protected:
    int roll_no;
    string name;
    char section;
public:
    void get_no(int a)
    {
        roll_no = a;
    }
    void get_name(string n)
    {
        name = n;
    }
    void get_section(char c)
    {
        section = c;
    }
};
class test : virtual public student
{
protected:
    int marks[5];
public:
    void get_marks()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks of subject " << i + 1 << "- ";
            cin >> marks[i];
        }
    }
};
class sports : virtual public student
{
protected:
    int s_grade;
public:
    void get_sgrade()
    {
        cout << "Enter the marks scored in sports- ";
        cin >> s_grade;
    }
};
class result : public test, public sports
{
    int total;
public:
    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        total += s_grade;
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
    int roll;
    cout << "Enter the roll no. of the student:";
    cin >> roll;
    r.get_no(roll);
    r.get_marks();
    r.get_sgrade();
    r.display();
    return 0;
} 