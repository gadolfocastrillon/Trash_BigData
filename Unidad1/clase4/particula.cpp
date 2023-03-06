#include <iostream>
#include <cmath> 

using namespace std;

class Particle{
private:
  double *position;
  int dim;

protected:
  //Copy me copia el array externo en un array interno de la clase
  //Esto se usa para poder modificar el vector dentro de la clase por medio de los punteros, para que no pueda ser modificado desde el exterior.
  
  void copy(double *posI, double *posO, int dim){
    for (int i =0; i<dim; i++){
      posO[i] = posI[i];
    }
  }
  public:
  Particle(int dim, double *position){
      this -> dim=dim;
      this -> position = new double[dim];
      copy (position,this -> position, dim);
    }
    Particle(const Particle &p){
      dim = p.dim;
      position = new double[dim];
      copy(p.position,position,dim);
    }
    //Se crea una copia de los objetos de la clase. Conocidos como copy constructor.
    ~Particle(){
      delete [] position;
    }

    void print(){
      for (int i=0; i<dim;i++){
	cout<<position[i]<<" ";
      }
      cout<<endl;
    }

    int getDim(){
      return dim;
    }//no creo un setDim ya que creo un arreglo con una dimensión, esta no debe ser modificada, la idea si necesita un elemento de mayor tamaño, cree de nuevo otro objeto con una tamaño diferente. Esto para evitar violaciones de segmento.
    
    
    double getPosition(int i){
      if (i>dim){
	cout<<"ERROR:Se trata de acceder a una posición mayor que la dimensión"<<endl;
	  exit(1);
      }
      return position[i];
    }
    
    void setPosition(int i, double value){
      if(i>dim){
        cout<<"ERROR:Se trata de acceder a una posición mayor que la dimensión"<<endl;
	  exit(1);
      }
      position[i] = value;
    }
  //En lo siguiente creo una función distance que es polimorfa, le puedo ingresar tanto un valor numerico como un puntero. 
  double distance(Particle p){
    if (dim!= p.getDim()){
      cout<<"Error:"<<endl;
      exit(1);
    }
    double sum=0;
    for (int i=0;i<dim;i++){
      sum+=(position[i] + p.getPosition(i))*(position[i]+p.getPosition(i));
    }
    return sqrt(sum);
  }
  double distance(Particle *p){
    return distance(*p); //Esto para hacer que se pueda ingresar p por referencia o por el valor numerico.
  }
  
};

int main(){
  double pos1[] = {0,0};
  double pos2[] = {1,1};
  Particle p1(2,pos1);
  Particle p2(2,pos2);

  p1.print();
  p2.print();
  cout<<"La distancia entre p1 y p2 es "<<p1.distance(p2)<<endl; 


  //Aca se definen los objetos por medio del puntero
  //auto es una palabra clase para definir la variable en el momento de instanciación es para usar automaticamente el nombre de la clase. 
  auto pp1 = new Particle(2,pos1);
  auto pp2 = new Particle(2,pos2);
  
  pp1 -> print();
  pp2 -> print();

  cout<<"La distancia entre pp1 y pp2 es "<<pp1-> distance(*pp2)<<endl;

  pp1 = pp2; //aca referencio que pp1 y pp2 apuntan a la misma dirección de memoria. 
  pp1->print(); //Arojan el mismo valor
  cout<<"Ahora pp1 arroja la misma información de pp2"<<endl;  
  //ahora solo tengo que eliminar una vez pp1 ya que asigne pp1 y pp2 al mismo espacio de memoria
  delete pp1;
  return 0;
    
}
