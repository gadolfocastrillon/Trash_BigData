#include <iostream>
#include<cmath>

using namespace std;

double integral(double (*func)(double),double a, double b, int n){
  double x_i = (b-a)/n, suma=0;
  
  for(double i=a;i<b;i+=x_i){
    suma+=func(i); 
  }
  return suma*x_i;
}
int main(){

  cout<<integral(sin,0,2*M_PI,100)<<endl;
  return 0;
}
