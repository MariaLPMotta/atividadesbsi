#include <iostream>

using namespace std;

int main()
{
    float media;

    cout << "Digite media" << endl;
    cin >> media;

    if (media >= 0 && media <= 10)
    {
       cout << "A media e valida " << media << endl;
       if (media >= 6)
         {
            cout << "Aluno foi aprovado com media " << media << endl;
         }
      else
         {
           cout << "Aluno foi reprovado com media n" << media << endl;
         }
    }
    else
    {
       cout << "A media " << media << " é invalida" << endl;
    }

    return 0;
}
