#include <iostream>
#include<strings.h>
#include<cstring>

using namespace std;
int endereco;
char palavra[100];
int i;
int *x;

int funcaoponteiro()
{
  int* x = &palavra;
}



int main() {

cout<< "DIGITE UMA PALAVRA DE ATÉ 100 LETRAS:"<< endl;
  cin.getline(palavra,100);
  int tamanho = strlen(palavra);
   

}