/*5 Write a program to count number of words and lines available in a file student.txt.*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream obj("student.txt");
    int words = -1, lines = -1;
    char ch;
    while (obj)
    {
        obj.get(ch);
        if (ch == '\n')
        {
            words++;
            lines++;
        }
        else if (ch == ' ')
        {
            words++;
        }
    }
    cout << "Number of the words- " << words << endl;
    cout << "Number of lines- " << lines << endl;
    return 0;
}