#include <iostream>
#include <string>

using namespace std;
string mensaje = "Mensaje global";
class Saludo
{
private:
  string mensaje;

public:
  Saludo(string mensaje){
    this -> mensaje = mensaje;
    cout<<"Constructor llamado"<<endl;
  }
  ~Saludo(){
    cout<<"Destructor llamado"<<endl;
    this -> mensaje = ""; 
  }
  void editMensaje(string mensaje){
    this-> mensaje = mensaje;
  }
  string viewMensaje(){
    return mensaje;
  }
  
  void saludar(){
    cout<<::mensaje<<endl;
    cout<<mensaje<<endl;
  }

};

int main()
{
  Saludo s("Hola clase");
  s.saludar();
  s.editMensaje("Este mensaje fue eliminado"); 
  //cout<<s.viewMensaje()<<endl;
  return 0;
}
