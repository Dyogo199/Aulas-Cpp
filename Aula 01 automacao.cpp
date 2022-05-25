#include <iostream>
#include <cstdlib>

using namespace std;

int main (int argc, char *argv[])
{

    int identificador;
    char nome [50];
    char dataNascimento[11];
    char Sexo;
    cout << "Digite o identificador";
    cin >> identificador;
    fflush(stdin);
    cout << "Digite o nome";
    gets (nome);
    cout << "digite a data de nascimento";
    gets (dataNascimento);
    cout << "Digite o sexo (M/F): ";
    cin >> Sexo;
    cout << "\n\n\n=== Os Dados Digitados Foram ===\n\n\n";
    cout << "Identificador  : " << identificador;
    cout << "\nNome           : " << nome;
    cout << "\nData Nascimento: " << dataNascimento;
    cout << "\nSexo (M/F)     : " << Sexo;
    cout << "\n\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}