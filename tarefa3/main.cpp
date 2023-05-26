#include <iostream>

using namespace std;

int main()
{
    string opc;
    int n1;
    int n2;
    float res;

    cout << "Digite + para Soma!\n";
    cout << "Digite - para subtracao!\n";
    cout << "Digite / para divisao!\n";
    cout << "Digite * para multiplicacao!\n";
    cout << "Digite S para sair do programa!\n";
    cin >> opc;
    
    cin.clear();
    cin.ignore(1000, '\n');

    if (opc=="+")
    {
        cout << "Informe o primeiro Número da operação\n";
        cin >> n1;
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Informe o segundo Número da operação\n";
        cin >> n2;
        res = n1 + n2;
        cout << "O resultado da operação é "<<res<<"\n";
    }else{
        if (opc=="-")
        {
            cout << "Informe o primeiro Número da operação\n";
            cin >> n1;
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Informe o segundo Número da operação\n";
            cin >> n2;
            res = n1 - n2;
            cout << "O resultado da operação é "<<res<<"\n";
        }else{
            if (opc=="/")
            {
                cout << "Informe o primeiro Número da operação\n";
                cin >> n1;    
                cin.clear();
                cin.ignore(1000, '\n');   
                cout << "Informe o segundo Número da operação\n";
                cin >> n2;                
                res = n1 / n2;
                cout << "O resultado da operação é "<<res<<"\n";
            }else{
                if (opc=="*")
                {
                    cout << "Informe o primeiro Número da operação\n";
                    cin >> n1;    
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Informe o segundo Número da operação\n";
                    cin >> n2;
                    res = n1 * n2;
                    cout << "O resultado da operação é "<<res<<"\n";
                }else{
                    if (opc=="s")
                    {
                        exit;
                    }else{
                        cout << "Opção Inválida!\n";
                    }
                }
            }
        }
    }
    
    
    return 0;
}


