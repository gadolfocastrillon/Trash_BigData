#include <iostream>

using namespace std;

void incremento_ptr(int *p){
  (*p)++; //Cojame el valor de memoria de p e incrementemelo en 1 
}
//Le paso la variable normal y busca su dirección en memoria
//luego modifica esa dirección de memoria en el sistema
void incremento_ref(int &n){x 
  n++; 
}

void test(int a){
  a++;
  cout<<a<<endl;
}


int main(){
  int num;
  int *p; 
  p = new int;
  num = 4 ;
  (*p)= 321;
  p = &num;
  /*
  //cout<<"Dirección de memoria = "<<p<<endl;
  // cout<<"Dirección de memoria = "<<&num<<endl; 
  cout<<"Valor p = "<<*p<<endl;
  cout<<"Valor num = "<<num<<endl;
  incremento_ref(num);
  //incremento_ptr(p);
  cout<<"Valor p = "<<*p<<endl;
  cout<<"valor num = "<<num<<endl;
  
  //num = 2; 
  //test(num); //me cambia el valor de num pero no lo guarda en memoria
  // cout<<num<<endl;
  */
  
  
  delete p; //Esto para eliminar el puntero que he creado y así limpiar la memoria 
  return 0; 
}
