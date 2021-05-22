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
     cout << nv<<"\n";
  cout << ponteiro;
}



int main() {

cout << "DIGITE A PALAVRA ESCOLHIDA:" << endl;
  cin.getline(palavra,100);
  tamanho = strlen(palavra);  
cout << "ESCOLHA A LETRA A SUBSTITUIR?" << endl;
  cin >> mud1;

cout << "ESCOLHA A LETRA A FICAR NO LUGAR?" << endl;
  cin >> mud2;

troca1(palavra, mud1, mud2, nv);

}