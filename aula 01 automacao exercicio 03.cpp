#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main (int argc, char *argv)
{
    char Palavra1 [14], Palavra2 [14], Palavra3 [14], Palavra4 [14];
   strcpy (Palavra1, "Belo Horizonte");
    cout << "Digite uma letra Qualquer";
    cin >> Palavra2;
    fflush(stdin);
    cout << "Digite uma letra Qualquer";
    gets (Palavra3);
    cout << "digite uma letra qualquer";
    cin.getline (Palavra4, 14);
     cout << "\nA palavra digitada na variável Palavra1 foi: " << 
Palavra1; 
    cout << "\nA palavra digitada na variável Palavra2 foi: " << 
Palavra2; 
    cout << "\nA palavra digitada na variável Palavra3 foi: " << 
Palavra3; 
    cout << "\nA palavra digitada na variável Palavra4 foi: " << 
Palavra4 << "\n\n"; 
    system("PAUSE"); 
    return EXIT_SUCCESS; 
}