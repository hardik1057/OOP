/*8. WAP to demonstrate the use of overloaded ( ) operator*/
#include <iostream>
using namespace std;
class Distance
{
   private:
      int feet;         
      int inches;           
   public:
    Distance()
    {
        feet = 0;
        inches = 0;
	}
    Distance(int f, int i) 
    {
        feet = f;
        inches = i;
    }
    Distance operator()(int a, int b, int c) 
    {
        Distance D;
        D.feet = a + c + 10;
        D.inches = b + c + 100 ;
        return D;
    }
    void displayDistance() 
    {
        cout << "Feet- " << feet << " Inches- " << inches << endl;
    }   
};
int main()
{
	Distance D1(11, 10), D2;
	cout << "Distance 1-  "; 
	D1.displayDistance();
	D2 = D1(10, 10, 10);
	cout << "Distance 2- "; 
	D2.displayDistance();
	return 0;
}