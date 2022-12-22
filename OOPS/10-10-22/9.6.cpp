/*Define a class called String and WAP by overloading == operator to compare two strings. */
#include<iostream>
#include<string.h>
using namespace std;
class String
{
    char str[20];
    public:
		void getdata()
        {
            cin>>str;
		}
		int operator ==(String s)
        {
            if(!strcmp(str,s.str))
                return 1;
			else
            {
                return 0;
            }
        }
};
int main()
{
    String s1,s2;
	cout<<"Enter first string- ";
    s1.getdata();
    cout<<"Enter second string- ";
    s2.getdata();
    if(s1==s2)
    {
        cout<<"\nStrings are Equal\n";
	}
    else
    {
        cout<<"\nStrings are Not Equal\n";
    }
    return 0;
}