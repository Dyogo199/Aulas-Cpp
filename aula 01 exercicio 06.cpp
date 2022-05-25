#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int opcao;
    
    do{
        cout << "\n\nOpçoes";
        cout << "\n\n1 - inclusão";
        cout << "\n2 - Exclusão";
        cout << "\n3 - Alteração";
        cout << "\n4 - Sair";
        cout << "\n\n Escolha a opção: ";
    } while ((opcao < 1) || (opcao > 4));
    switch (opcao){
     case 1 :
     cout << "\n\nA opção escolhida foi Inclusão. \n\n";
     break;
     case 2 :
     cout << "\n\nA opção escolhida foi Exclusão. \n\n";
     break;
     case 3 :
     cout << "\n\nA opção escolhida foi Alteração. \n\n";
     break;
     case 4 :
     cout << "\n\nA opção escolhida foi Sair. \n\n";
     break;
    }
    system ("PAUSE");
    return EXIT_SUCCESS;
    
}