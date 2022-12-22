//WAP to find the average mark of 5 subjects of a student. Assume full mark for each subject is 100 
#include <iostream>
using namespace std; 
int main()
{
    int i;  
    float marks, total=0.0f, average, per;
    cout << "Enter marks of 5 subjects- ";
    for(i=0;i<5;i++)
        {
           cin >> marks;
           total += marks; 
        }
    average = total /5;
    per = (total/(5 * 100)) * 100;  
    cout << "Total Marks (out of 500)-" << total;  
    cout << "\nAverage Marks- " << average;  
    cout << "\nPercentage- " << per;  
    return 0;  
}