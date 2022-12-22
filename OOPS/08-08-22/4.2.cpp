//Create a class which stores name, roll number and total marks for a student. Input the data for a student and display it.
#include <iostream>
using namespace std;
class student
{
    char  name[30];
    int   roll;
    int   total;
    public:
        void input(void);
        void display(void);
};
void student::input(void)
{
    cout << "Enter name- " ;
    cin >> name;
    cout << "Enter roll- ";
    cin >> roll;
    cout << "Enter total marks- ";
    cin >> total;
}
void student::display(void)
{
    cout << "Details- \nName- "<< name << "\nRoll Number- " << roll << "\nTotal marks- " << total<<endl;
}
int main()
{
    student s;
    s.input();
    s.display();
    return 0;
}