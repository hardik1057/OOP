//Modify the program ii) to store marks in 5 subjects. Calculate the total marks and percentage of a student and display 
#include <iostream>
using namespace std;
class student
{
    int roll,i;
    char name[50];
    int marks[5];
    float total=0;
    float perc;
    public:
        void input(void);
        void display(void);
        void calc(void);
};
void student::calc()
{
    for (i=0;i<5;i++)
        total+=marks[i];
    perc=(total)/5;
}
void student::input(void)
{
    cout << "Enter name- " ;
    cin >> name;
    cout << "Enter roll- ";
    cin >> roll;
    cout << "Enter marks for 5 subjects- ";
    for(i=0;i<5;i++)
        {
            cin>>marks[i];
        }
}
void student::display(void)
{   
    total=0;
    for(i=0;i<5;i++)
        {
           total=total+marks[i]; 
        }
    cout << "Details- \nName- "<< name << "\nRoll Number- " << roll << "\nTotal marks- " << total<< "\nPercentage- "<<perc<<endl;
}
int main()
{
    student s;
    s.input();
    s.calc();
    s.display();
    return 0;
}