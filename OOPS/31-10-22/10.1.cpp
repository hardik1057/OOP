/*Define a class Item that is used to store and display the information regarding the item number and its price. Write a program to store and 
display the details of one items by using both normal object and pointer to object separately. Display appropriate message wherever necessary. */
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
	item t;
	t.get_data();
	item *p=&t;
	cout<<"\nDisplaying using object\n";
	t.display();
	cout<<"\nDisplaying using pointer to object\n";
	p->display();
	return 0;
}