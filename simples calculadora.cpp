#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){

    int num1, num2, soma, sub, multi, div;

    cout << "Seja bem vinda a Simples Calculadora!" << endl;
    cout << "Digite um numero inteiro: " << endl;
    cin >> num1;

    cout << "Digite outro numero inteiro: " << endl;
    cin >> num2;

    soma  = num1 + num2;
    sub   = num1 - num2;
    multi = num1 * num2;
    div   = num1 / num2;

    cout << "A soma dos numeros eh: " << soma << endl;
    cout << "A subtracao dos numeros eh: " << sub << endl;
    cout << "A multiplicacao dos numeros eh: " << multi << endl;
    cout << "A divisao dos numeros eh: " << div << endl;


    system ("pause");

    return 0;
}
