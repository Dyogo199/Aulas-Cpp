#include <cstdlib> 
#include <iostream> 
using namespace std; 
int main (int argc, char *argv[])
{
    char Letra1, Letra2; 
    Letra2 = 'E';  
    cout << "Digite uma letra qualquer: "; 
    cin >> Letra1; 
    cout << "\nA letra digitada foi: " << Letra1; 
    cout << "\nA letra atribuida a variável internamente foi: " <<  Letra2 << "\n\n"; 
    system("PAUSE"); 
    return EXIT_SUCCESS; 
}