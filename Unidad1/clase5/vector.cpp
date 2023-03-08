#include <cmath>
#include <iostream>

using namespace std;

class Vector{
private:
  double* data;
  int size;
public:
  Vector(int n): size(n){
    data = new double[n];
    for (int i = 0; i<size; i++){
      data[i] = 0.0;
    }
  }
  Vector ( const Vector& v): size(v.size){
    data = new double[size];
    for (int i = 0; i<size; i++){
      data[i] = v.data[i];
    }
  }
  ~Vector(){
    delete[] data;
  }

  int getSize() const{
    return size;
  }

  double get(int i) const{
    return data[i];
  }
  void set(int i, double x){
    data[i] = x;

  }

  double norm() const{
    double sum = 0.0;
    for (int i = 0; i<size;i++){
      sum += data[i] * data[i];
    }
    return std::sqrt(sum);
  }

  Vector& operator=(const Vector& v){
    if (this!= &v){
      if (size != v.size){
	delete[] data;
	size  = v.size;
	data = new double[size];
      }
      for (int i=0; i<size; i++){
	data[i] = v.data[i];
      }
    }
    return *this;
  }

  Vector operator+(const Vector& v) const{
    Vector w(size);
    for (int i = 0; i<size; i++){
      w.data[i] = data[i] + v.data[i];
    }
    return w;
  }
  Vector operator-(const Vector& v) const{
    Vector w(size);
    for (int i=0;i<size;i++){
      w.data[i] = data[i] - v.data[i];
    }
    return w;
  }
  //Defino operaciones que deseo realizar con una función
  /*Por ejemplo para mostrar la posición i del vector que definimo lo describo como 
operador[] y el paso la posición que deseo mostrarle.
*/
  double& operator[](int i){
    return data[i];
  }
    
};


int main()
{
  Vector v1(2);
  Vector v2(2);
  v1.set(0,2);
  v1.set(1,2);

  v2.set(0,1);
  v2.set(1,1);

  auto v3 = v1+v2;
  cout<<v3.get(0)<<"  "<<v3.get(1)<<endl;
  v3=v1-v2;
  cout<<v3.get(0)<<"  "<<v3.get(1)<<endl;
  v3=v2;
  cout<<v3.get(0)<<"  "<<v3.get(1)<<endl;

  v3[0] = 0.1; //Salta error debido a que no estoy referenciando a ningun vector
  //debo modificar double operator[] y añadirle un paso por referencia o sea
  //double& operator[](int i) {}
  cout<<v3[0]<<endl;
  return 0;
}
  
