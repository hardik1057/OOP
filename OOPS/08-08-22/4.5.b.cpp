// Create a class distance which stores a distance in feet and inches. Input 2 distance values in objects, add them, store the resultant distance in and object and display it.
// (B)return the resultant object C3=C1.add(C2)
#include <iostream> 
using namespace std; 
class distance
{
    int foot, inch;
public:
    void input()
    {
        cout << "Enter distance in foot and inches- ";
        cin >> foot >> inch;
    }
    void display()
    {
        cout << "The resultant distance is- " << foot << "ft " << inch << "in "<<endl;
    }
    distance add(distance d)
    {
        distance dist;
        dist.foot = d.foot + foot; dist.inch = d.inch + inch; 
        while (dist.inch >= 12)
            {
                dist.inch -= 12;
                dist.foot += 1;
            }
        return (dist);
    }
};
int main()
{
    class distance d1, d2, d3; 
    d1.input();
    d2.input();
    d3 = d1.add(d2); 
    d3.display();
    return 0;
}
