#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    
    int v1, v2,op, res = 0;
    cout<<"====Calculadora de 4 operações basica====";
    
    cout <<"\n\nDigite o 1º valor: ";
    cin >> v1;
     cout <<"\n\nDigite o 2º valor: ";
    cin >> v2;
    
    cout << "\n\nEscolha a operação: ";
    cout << "\n\n 1- somar" ;
    cout << "\n 2- subtrair" ;
    cout << "\n 3- multiplicação" ;
    cout << "\n 4- divisão" ;
    cin >> op ;
    
    switch(op){
        case 1:
            res = v1+v2;
            break;
            
        case 2:
            res = v1-v2;
            break;
        case 3:
            res = v1*v2;
            break;
        case 4:
            if(!(v2==0)){
            res = v1/v2;
            
        }
        else{
            cout << "\n\nErro de divisão!!!\n\n";
        }
        break;
        
        default :
        
        cout <<"\n\nOpção escolhida é invalida!!!\n\n";
    }
    cout << "\n\nO resultado é: "<< res << "\n\n";
    
        system("PAUSE"); 
    return EXIT_SUCCESS;
}