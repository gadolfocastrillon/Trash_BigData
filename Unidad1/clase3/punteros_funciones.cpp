#include <iostream>

using namespace std;
int suma(int a, int b){
  return a+b;
}
void suma_vec(int *sum,int *a, int *b, int n){
  for (int i=0; i<n;i++){
    sum[i] = a[i] + b[i];
      }
}
void resta_vec(int *sum,int *a, int *b, int n){
  for(int i=0;i<n; i++){
    sum[i] = a[i] - b[i];
      }
}
void operar(void (*op)(int*,int*,int*,int),int *sum, int *a, int *b, int n){
  op(sum,a,b,3);
    }



int main(){
  int (*suma_ptr)(int,int); //Define el puntero para almacenar la función
  suma_ptr = &suma; //asigno al puntero una función llamada suma
  cout<<suma_ptr(2,2)<<endl;

  void (*suma_v_ptr)(int*, int*, int*, int);
  suma_v_ptr = &suma_vec;

  int a[] = {1,1,1};
  int b[] = {2,2,2};
  int c[3];
  operar(suma_vec,c,a,b,3);
  cout<<c[0]<< " "<<c[1]<<" "<<c[2]<<endl;
  

  return 0; 
}
