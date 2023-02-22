#include <iostream>
#include <string>

using namespace std; 

int main(){
	cout<<"Ingrese un número: "; 
	int num=0; 
	cin>> num; 
	int output = (num>5)? 1:0; 
	cout<<output<<endl;
	return 0; 
}