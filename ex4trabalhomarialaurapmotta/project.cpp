#include <iostream>
#include <iomanip> 
#include <cstdlib>

using namespace std;

int main(int argc, char** argv){
float vi, dec, vf;
char nome [10];
cout << "Digite o nome do produto\n";
cin >> nome;
cout << "Digite o preco do produto\n";
cin >> vi;
dec = vi * 0.13;
vf = vi - dec;
cout << "Poduto: "<< nome << endl;
cout << "Valor inicial: " << vi << endl;
cout << "Desconto: " << dec << endl;
cout << "Valor final do produto: " << vf << endl;

    return 0;
}
