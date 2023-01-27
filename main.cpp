#include <iostream>
using namespace std;

int main()
{
    int x = -1;
    //what happens if  x = 0, 1

    cout << "Before try \n";
    try {
        cout << "Inside try \n";
        //Challenge make it so that the exception is cuaght when x is even between the range of 5 and 9
        if (x < 0)
        {
            throw x;
            cerr << "\n After throw (Never executed) \n";
            cout << "After throw (Never executed) \n";
        }
    }
    catch (int x ) {
        cout << "Exception Caught \n";
    }

    cout << "After catch (Will be executed) \n";
    return 0;
}