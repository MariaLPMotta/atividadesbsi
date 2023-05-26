#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char bolo;
    cout << "Escolha uma opcao do cardapio para saber o valor\n ";
    cout << "Digite - a - escolher bolo de chocolate\n";
    cout << "Digite - b - escolher bolo de Banana\n";
    cin >> bolo;
    bolo = toupper(bolo);
    switch (bolo){
      case 'A':
        cout << "O bolo de chocolate custa R$ 14.00\n";
      break;
      case 'B':
        cout << "O bolo de banana custa R$ 17.00\n";
      break;
      default:
        cout << "Opcao Invalida\n";
        }
    return 0;
}
