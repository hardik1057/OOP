// create a class which stores names, roll number and total marks for student. Input data for n students. find the average marks scored by n student
// store it as a data member of the class and display it using a function which may  be called without subject
#include<iostream>
using namespace std;
class school
{
	private:
		char name[20];
		int roll;
		int total;
		float avg;
	public:
		void get()
        {
			cout<<"\nEnter name- ";
			cin>>name;
			cout<<"Enter roll- ";
			cin>>roll;
			cout<<"Enter total marks- ";
			cin>>total;
		}
		void average(school *s,int n,int ind)
        {
			float t=0;
			for(int i=0;i<n;i++)
            {
				t+=s[i].total;
			}
			t/=n;
			for(int i=0;i<n;i++)
            {
				if(i==ind)
                {
					s[i].avg=t;
					cout<<"\n\nName- "<<s[i].name;
					cout<<"\nRoll number- "<<s[i].roll;
					cout<<"\nTotal marks- "<<s[i].total;
				}
			}
			cout<<"\nAverage marks- "<<t;
		}
};
int main()
{
	int n;
	cout<<"Enter number of students- ";
	cin>>n;
	school student[n];
	for(int i=0;i<n;i++)
        {
            student[i].get();
        }
	for(int i=0;i<n;i++)
        {
            student[i].average(student,n,i);
        }
	return 0;
}