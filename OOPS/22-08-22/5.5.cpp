// Create a class which stores name, author and price of a book. Store information for n number of books. Display information of
//  all the books in a given price range using friend function.
#include <iostream>
#include <string>
using namespace std;
class book
{
	string book_name, author;
	int price;

public:
	void get()
	{
		cout << "\nEnter name of the book- ";
		cin >> book_name;
		cout << "Enter author name- ";
		fflush(stdin);
		cin >> author;
		cout << "Enter price- ";
		cin >> price;
	}
	friend void display(int a, int b, book b1);
};
void display(int a, int b, book b1)
{
	if (b1.price >= a && b1.price <= b)
	{
		cout << b1.book_name << " by " << b1.author << endl;
	}
}
int main()
{
	int n;
	cout << "Enter number of books- ";
	cin >> n;
	book lib[n];
	for (int i = 0; i < n; i++)
	{
		lib[i].get();
	}
	int lw, up;
	cout << "\nEnter the range of price\nlower limit- ";
	cin >> lw;
	cout << "Upper limit- ";
	cin >> up;
	cout << "\nBooks within the range are- \n";
	for (int i = 0; i < n; i++)
	{
		display(lw, up, lib[i]);
	}
	return 0;
}