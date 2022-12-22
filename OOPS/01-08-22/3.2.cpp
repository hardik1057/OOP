//WAP to convert given paisa into its equivalent rupee and paisa. 
#include <iostream>
using namespace std;
int main()
{
	int total,rupees,paisa;
	cout<<"Enter Amount in paise - ";
	cin>>total;
	rupees = total / 100;
	paisa = total % 100;
	cout<<"Converted Paisa in Rs = "<<rupees<<"."<<paisa<<endl;
    return 0;
}