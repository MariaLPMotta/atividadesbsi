#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {
    int i;
    for(i = 10; i >= 1; i--)
    cout << setw(5) << i << setw (10) << "x   6 = " << i*6 << endl;
    
    return 0;
}