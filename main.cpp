#include <iostream>
#include "implementations.hpp"
#include "utils.hpp"

using namespace std;

int main (int argc, char* argv[]) 
{
  int algorithm = atoi(argv[1]);
  int quantidade, situacao;

  cout<<"Digite o tamanho do vetor desejado"<<endl;
  cin>>quantidade;
  cout<<"Digite a ordenacao do vetor"<<endl;
  cin>>situacao;

  int* vector = new int [quantidade];
  gerador(vector, quantidade, situacao);

  switch (algorithm) 
  {
    case 1: 
    {
      cout<<"Testando maxr4..."<<endl<<endl;
      int maxNumber = maxr4(vector, 0, quantidade-1);
      cout<<"O maior numero e: "<<maxNumber<<endl;
      printVector(vector, quantidade);

    } break;

    case 2: 
    {
      cout<<"Testando o findMinMax..."<<endl;
      int x, y;

      findMinMax(vector, 0, quantidade-1, &x, &y);
      cout<<"O menor valor e: "<<x<<endl;
      cout<<"O maior valor e: "<<y<<endl;

      printVector(vector, quantidade);
    } break;

    case 3: 
    {
      int x, y;
      cout<<"Digite a base"<<endl;
      cin>>x;
      cout<<"Digite o expoente"<<endl;
      cin>>y;
      cout<<"A potencia de x por y e: "<<power(x,y)<<endl;
    }
  }
  
  delete [] vector;

  return 0;
}