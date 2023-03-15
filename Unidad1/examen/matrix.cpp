#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

class Matrix{

private:
  vector<double>* data;
  vector<vector<double> >* info; 
  int size_n;
  int size_m;
  

public:
  Matrix(int n, int m):size_n(n),size_m(m){
    data = new vector<double>[size_n];
    info = new vector<vector <double>>[size_n];
    cout<<data.size()<<endl;
    /*
    for(int i =0; i<size_n;i++){
      for(int j=0;j<size_n;j++){
	data[j] = 0.0; 
      }
      info[i] = data; 
      }*/
    

  }
  void viewMatrix(){
    for (int i=0;i<size_n;i++){
      cout<info[i]<<endl;
  }
  }
};

int main(){
  Matrix hola(2,2);
  hola.viewMatrix();

}

  
