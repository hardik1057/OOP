//Create a class which stores id, name, age and basic salary of an employee. Input data for n number of employees. 
//Calculate the gross salary of all the employees and display it along with all other details in a tabular form.
#include <iostream>
using namespace std;
class employee
{
	string name;
	int age;
	float basic,da,hra,gross;
	public:
		void getdata()
            {
                cout<<"Enter Name- ";
                cin>>name;
                cout<<"Enter Age- ";
                cin>>age;
                cout<<"Enter Basic salary- ";
                cin>>basic;	
                gross=basic+(0.8*basic)+(0.1*basic);
			}
		void display()
		    {
                cout<<"Name- "<<name<<endl;
                cout<<"Age- "<<age<<endl;
                cout<<"Basic salary= "<<basic<<endl;
                cout<<"Gross salary= "<<gross<<endl;
			}	
};
int main()
{
	int num=0;
	cout<<"Enter number of employee- ";
	cin>>num;
	employee emp[num];
	for(int i=0; i<num; i++)
        {
            cout<<"Enter Employee "<<i+1<<" details- "<<endl;
            emp[i].getdata();		
        }
	for(int i=0; i<num; i++)
        {
            cout<<"\nEmployee "<<i+1<<" details- "<<endl;
            emp[i].display();	
        }
	return 0;
}