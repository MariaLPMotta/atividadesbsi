#include <iostream>
#include <cctype>

using namespace std;

int main()
{ int i = 1;

    while ( i <= 100 )
    {
        if ( i % 10 == 0)
        {

        cout  << i << endl;
        }


    i = i + 1;
    }


     cout << "Acabou" << endl;

    return 0;
}
