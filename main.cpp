#include <iostream>
#include<strings.h>
#include<cstring>

using namespace std;

char mud1, mud2;
char palavra[100];
int tamanho;
int troca;
char nv[100];

void troca1(char *ponteiro, char mud1, char mud2, char *p){
    for(int j=0; j<tamanho;j++)
    {
        if(ponteiro[j]==mud1)
        {
          p[j] = mud2; 
          troca++;
        }  
    }
  cout << "\n";
  cout << "SAÏDA" << endl;
  cout <<"\n" << nv <<"\n";
  cout << ponteiro << endl;
  cout<< troca;
}



int main() {
cout << "ENTRADA"<< "\n"<< endl;

cout << "DIGITE UMA PALAVRA (SOMENTE EM LETRA MAIUSCULA OU MINUSCULA):" << endl;
  cin.getline(palavra,100);
  tamanho = strlen(palavra);  

cout << "DIGITE UM CARACTER A SER SUBSTITUIDO!" << endl;
  cin >> mud1;

cout << "DIGITE UM CARACTER A SER COLOCADO NO LUGAR DO ANTERIOR!" << endl;
  cin >> mud2;

for(int i = 0; i < tamanho; i++)
{
    nv[i] = palavra[i];  
}
troca1(palavra, mud1, mud2, nv);

}