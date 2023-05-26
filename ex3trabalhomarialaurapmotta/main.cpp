
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    float circ, per, raio, area;
    const float pi = 3.14
   
    cout << "digite o valor do cumprimento da circuferencia\n";
    cin >> circ;
   
    raio = circ / 2 * pi;
    cout << "O valor do raio e: " << raio << endl;
    
    area = pi* (raio * raio);
    cout << "O valor da area e: " << area << endl;
    
    per = 2 * pi * raio;
    cout << "o valor do perimetro e" << per << endl;
    
   
    
    
    return 0;
}

