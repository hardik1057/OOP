/*6 Write a program to copy the content of two files and merge them into a third file.*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream obj1, obj2, obj3;
    obj1.open("file1.txt");
    obj1 << "Hello this is file 1" << endl;
    obj1 << "Nice to meet you" << endl;
    obj1.close();
    obj2.open("file2.txt");
    obj2 << "Hello this is file 2" << endl;
    obj2 << "This is the final OOP lab Assignment" << endl;
    obj2.close();
    ifstream b1, b2;
    obj3.open("merge.txt");
    b1.open("file1.txt");
    char line[80];
    cout << "Content of File 1- \n";
    while (b1)
    {
        b1.getline(line, 80);
        obj3 << line << endl;
        cout << line << endl;
    }
    b1.close();
    b2.open("file2.txt");
    cout << "Content of File 2- \n";
    while (b2)
    {
        b2.getline(line, 80);
        obj3 << line << endl;
        cout << line << endl;
    }
    b2.close();
    obj3.close();
    return 0;
}