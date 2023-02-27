#include <iostream>

using namespace std;

int main(){
  int arr[5] ={1,2,31,4,5};
  int* p =arr;
  cout<<*(p+2)<<endl; //primero sumeme las 2 direcciones de memoria y luego muestreme el valor
  cout<<p<<endl;
  cout<<p+2<<endl;
  /*Nota: El entero equivale a 4 bits, luego en posición de memoria deberia aumentarme cada entero 4 bits, en este caso la diferencia entre ambos es de 8 bits, ya que me estoy moviendo 2 enteros de espacio de memoria*/


  return 0; 
}
