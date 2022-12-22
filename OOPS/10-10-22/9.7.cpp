/*Define a class called Time that stores hours,minutes and seconds. WAP to overload +=, -=, *=, %= operators*/
#include<iostream>
using namespace std;
class Time
{
	float hrs,mins,secs;
	public:
		void get_data()
        {
			cout<<"Enter hours- ";
			cin>>hrs;
			cout<<"Enter minutes- ";
			cin>>mins;
			while(mins>=60)
            {
				hrs++;
				mins-=60;
			}
			cout<<"Enter seconds- ";
			cin>>secs;
			while(secs>=60)
            {
				mins++;
				secs-=60;
			}
		}
		Time operator +(Time &t)
        {
			Time t1;
			t1.hrs=hrs+t.hrs;
			t1.mins=mins+t.mins;
			if(t1.mins>=60)
            {
				t1.hrs++;
				t1.mins-=60;
			}
			t1.secs=secs+t.secs;
			if(t1.secs>=60)
            {
				t1.mins++;
				t1.secs-=60;
			}
			return t1;
		}
		Time operator -(Time &t)
        {
			Time t1;
			t1.hrs=hrs-t.hrs;
			t1.mins=mins-t.mins;
			t1.secs=secs-t.secs;
			return t1;
		}
		Time operator *(Time &t)
        {
			Time t1;
			t1.hrs=hrs*t.hrs;
			t1.mins=mins*t.mins;
			t1.secs=secs*t.secs;
			while(t1.mins>=60)
            {
				t1.hrs++;
				t1.mins-=60;
			}
			while(t1.secs>=60)
            {
				t1.mins++;
				t1.secs-=60;
			}
			return t1;
		}
		Time operator /(Time &t)
        {
			Time t1;
			t1.hrs=hrs/t.hrs;
			t1.mins=mins/t.mins;
			t1.secs=secs/t.secs;
			return t1;
		}
		void display()
        {
			cout<<"Hours- "<<hrs<<" Minutes- "<<mins<<" Seconds- "<<secs<<endl;
		}
};
int main()
{
	Time t1,t2,t3;
	t1.get_data();
	t2.get_data();
	cout<<"Time 1- ";
	t1.display();
	cout<<"Time 2- ";
	t2.display();
	t3=t1+t2;
	cout<<"Adding- ";
	t3.display();
	t3=t1-t2;
	cout<<"Subtracting- ";
	t3.display();
	t3=t1*t2;
	cout<<"Multiplying- ";
	t3.display();
	t3=t1/t2;
	cout<<"Dividing- ";
	t3.display();
	return 0;
}