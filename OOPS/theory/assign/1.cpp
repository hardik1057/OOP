/*We want to store the information of different vehicles. Create a class named Vehicle withtwo data member named mileage and price. Create its 
two subclasses *Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).
*Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil), wheel type(alloys or spokes) 
and fuel tank size(in inches) Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. Next, make 
two subclasses Bajaj and TVS, each having a data member to store the make-type. Now, store and print the information of an Audi and a 
Ford car (i.e. model type, ownership cost,warranty, seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a TVS bike.*/
#include<iostream>
#include<string>
using namespace std;
class vehicle
{
	protected:
		int mlg;
		long int price;
};
class car:public vehicle
{
	protected:
		int owner_cost,warranty,capacity;
		string f_type;
};
class bike:public vehicle
{
	protected:
		int n_cyl,gears,f_size;
		string c_type,w_type;
};
class Audi:public car
{
	string model_type;
	public:
		void get_data()
        {
			cout<<"Enter the model name of the car- ";
			cin>>model_type;
			cout<<"Enter the ownership cost- ";
			cin>>owner_cost;
			cout<<"Enter the warranty period- ";
			cin>>warranty;
			cout<<"Enter the seating capacity- ";
			cin>>capacity;
			cout<<"Enter the fuel type of the car- ";
			cin>>f_type;
			cout<<"Enter the mileage provided by the car- ";
			cin>>mlg;
			cout<<"Enter the price of the car- ";
			cin>>price;
		}
		void display()
        {
			cout<<"Model Name- "<<model_type<<endl;
			cout<<"Ownership Cost of the car- "<<owner_cost<<"\tWarranty period of the car- "<<warranty<<endl;
			cout<<"Seating Capacity of the car- "<<capacity<<"\tFuel type of the car- "<<f_type<<endl;
			cout<<"Mileage provided by the car- "<<mlg<<"\tPrice of the car- "<<price<<endl;
		}
};
class Ford:public car
{
	string model_type;
	public:
		void get_data()
        {
			cout<<"Enter the model name of the car- ";
			cin>>model_type;
			cout<<"Enter the ownership cost- ";
			cin>>owner_cost;
			cout<<"Enter the warranty period- ";
			cin>>warranty;
			cout<<"Enter the seating capacity- ";
			cin>>capacity;
			cout<<"Enter the fuel type of the car- ";
			cin>>f_type;
			cout<<"Enter the mileage provided by the car- ";
			cin>>mlg;
			cout<<"Enter the price of the car- ";
			cin>>price;
		}
		void display()
        {
			cout<<"Model Name- "<<model_type<<endl;
			cout<<"Ownership Cost of the car- "<<owner_cost<<"\tWarranty period of the car- "<<warranty<<endl;
			cout<<"Seating Capacity of the car- "<<capacity<<"\tFuel type of the car- "<<f_type<<endl;
			cout<<"Mileage provided by the car- "<<mlg<<"\tPrice of the car- "<<price<<endl;
        }
};
class Bajaj:public bike
{
	string model_type;
	public:
		void get_data()
        {
			cout<<"Enter the model name of the bike- ";
			cin>>model_type;
			cout<<"Enter the fuel tank size in inches of the bike- ";
			cin>>f_size;
			cout<<"Enter the wheel type of the bike- ";
			cin>>w_type;
			cout<<"Enter the cooling type of the bike- ";
			cin>>c_type;
			cout<<"How many gears bike have- ";
			cin>>gears;
			cout<<"How many cylinders bike have- ";
			cin>>n_cyl;
			cout<<"Enter the mileage provided by the bike- ";
			cin>>mlg;
			cout<<"Enter the price of the bike- ";
			cin>>price;
		}
		void display()
        {
			cout<<"Model Name- "<<model_type<<endl;
			cout<<"Size of Fuel tank of the bike- "<<f_size<<"\tWheel type of the bike- "<<w_type<<endl;
			cout<<"Cooling type of the bike- "<<c_type<<"\tNumber of Gears bike have- "<<gears<<endl;
			cout<<"Number of Cylinders bike have- "<<n_cyl<<"\tMileage provided by the bike- "<<mlg<<endl;
			cout<<"Price of the bike- "<<price<<endl;
		}
};
class TVS:public bike
{
	string model_type;
	public:
		void get_data()
        {
			cout<<"Enter the model name of the bike- ";
			cin>>model_type;
			cout<<"Enter the fuel tank size of the bike- ";
			cin>>f_size;
			cout<<"Enter the wheel type of the bike- ";
			cin>>w_type;
			cout<<"Enter the cooling type of the bike- ";
			cin>>c_type;
			cout<<"How many gears bike have- ";
			cin>>gears;
			cout<<"How many cylinders bike have- ";
			cin>>n_cyl;
			cout<<"Enter the mileage provided by the bike- ";
			cin>>mlg;
			cout<<"Enter the price of the bike- ";
			cin>>price;
		}
		void display()
        {
			cout<<"Model Name- "<<model_type<<endl;
			cout<<"Size of Fuel tank of the bike- "<<f_size<<"\tWheel type of the bike- "<<w_type<<endl;
			cout<<"Cooling type of the bike- "<<c_type<<"\tNumber of Gears bike have- "<<gears<<endl;
			cout<<"Number of Cylinders bike have- "<<n_cyl<<"\tMileage provided by the bike- "<<mlg<<endl;
			cout<<"Price of the bike- "<<price<<endl;
		}
};
int main()
{
	Audi obj1;
	obj1.get_data();
	obj1.display();
	Ford obj2;
	obj2.get_data();
	obj2.display();
	Bajaj obj3;
	obj3.get_data();
	obj3.display();
	TVS obj4;
	obj4.get_data();
	obj4.display();
	return 0;
}