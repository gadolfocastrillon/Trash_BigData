#include <iostream>

using namespace std;

void llenar(int *p, int n, int valor){
  for(int i=0; i<n;i++){
    p[i] = valor;
  }
}
void print(int *p, int n){

    cout<<"[ ";
    for (int i=0;i<n;i++){
      cout<<p[i]<<" ";
    }
    cout<<"]"<<endl;
}
void incremento_ptr(int *p, int n){
  for (int i=0; i<n;i++){
    p[i]++;
  }
}
    
int main(){
  unsigned int num=10;
  int *p1 = new int[num]; //creo un arreglo de 10 enteros
  int p2[] ={1,1,1,1,1,1,1,1,1,1}; //10 enteros asignados a un puntero   
  int *p3 = new int(num); //creo un arreglo de 10 enteros. 
  llenar(p1,num,2);
  print(p1,num);
  print(p2,num);
  print(p3,num);
  incremento_ptr(p2,num);
  print(p2,num);
  //Estoy delete son importantes para liberar el espacio en el stack, ya que si bien el programa me elimina la información, no la saca del stack si creo los punteros. 
  delete[] p1;
  // delete[] p2; //no es necesaria cuando la variable es estatica. 
  delete[] p3;
  return 0;
}
