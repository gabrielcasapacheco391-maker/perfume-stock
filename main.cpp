#include <iostream>
#include "Perfume.h"
#include "Stock.h"
#include <limits>
using namespace std;

int main()
{
int opcao=-1;

Stock estoque;


 while (true) {
cout << "0. Sair " <<endl;
cout << "1 - Cadastrar perfume: " <<endl;
cout << "2 - Listar perfume: "<< endl;
if (!(cin >> opcao)) {
    cout << "Opcao invalida! Digite um numero." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    continue;
}

cin.ignore(numeric_limits<streamsize>::max(), '\n');
switch (opcao){


case 1:{
    cout << "Cadastrando o perfume....  " <<endl;
    string nome;
string marca;
cout << "digite o nome do perfume: " <<endl;
getline(cin, nome);
cout <<" Agora digite o nome da marca: " <<endl;
getline(cin,marca);

double preco;
double volume;

cout << "Digite o preco: " << endl;
cin >> preco;
if (!cin) {
    cout << "Preco invalido: digite um numero." << endl;
    return 1;
}
cout << "Digite o volume em ml: " << endl;
cin >> volume;
if (!cin) {
    cout << "Volume invalido: digite um numero." << endl;
    return 1;
}

if(preco < 0 || volume <=0){

cout <<"cancelado o cadastro "  << endl;
}else{
    Perfume novoPerfume(nome, marca, preco, volume);
estoque.addPerfume(novoPerfume);

}
 break;

}
case 2:
    estoque.showInfo();

break;
case 0:
    cout << "Encerrando o programa " << endl;
    return 0;

default:

    cout <<"opcao invalida!" <<endl;
break;

}


 }

   return 0;
}
