#include <iostream>
using namespace std;



int main()
{
    try
    {
        throw 4.5;
        cout << "This never prints" << endl;
    }
    catch (double x)
    {
        cerr << "We caught a double of value" << endl;
    }
}
