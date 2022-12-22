/*Modify the program LE8.1 by creating an array of n objects using pointers. Show the details of n items by using pointers to object concept.*/
#include<iostream>
using namespace std;
class item
{
	int item_no;
	int price;
	public:
		void get_data()
        {
			cout<<"Enter the item number- ";
			cin>>item_no;
			cout<<"Enter the price of the item- ";
			cin>>price;
		}
		void display()
        {
			cout<<"Item number- "<<item_no<<" Price- "<<price<<endl;
		}
};
int main()
{
	int n;
	cout<<"Enter number of data you want to collect- ";
	cin>>n;
	item t[n];
	item *p=t;
	for(int i=1;i<=n;i++)
    {
		cout<<"Enter data for item "<<i<<endl;
		p->get_data();
		//p++;
	}
	//p--;
	cout<<"\nDisplaying using pointer to object\n";
	for(int i=1;i<=n;i++)
    {
		cout<<"\nItem"<<i<<"- ";
		p->display();
		//p--;
	}
	return 0;
}