

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    int idade = 19;
    long long int cpf = 22345500000458791;
    float salario = 1248.50;
    double pi = 3.141524999998091;
    char sexo = 'f';
    char nome [50] = "linguagem c";
    cout << fixed << setprecision (4);
    
    cout << "teste com os tipos de variavel\n";
    cout << "idade: " << idade << "\n";
    cout << "cpf: " << cpf << "\n";
    cout << "salario: " << salario << "\n";
    cout << "pi: " << pi << "\n";
    cout << "sexo: " << sexo << "\n";
    cout << "nome: " << nome << "\n";

    return 0;
}

