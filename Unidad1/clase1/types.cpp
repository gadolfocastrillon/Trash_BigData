#include <iostream>
#include <limits>

using namespace std;

int main()
{
  cout<<"Size of char: "<<sizeof(char)<<" byte"<<endl;
  cout<<"Size of short int: "<<sizeof(short int)<<" byte"<<endl;
  cout<<"Size of int: "<<sizeof(int)<<" byte"<<endl;
  cout<<"Size of long int: "<<sizeof(long int)<<" byte"<<endl;
  cout<<"Size of long long int: "<<sizeof(long long int)<<" byte"<<endl;
  cout<<"Size of float :" <<sizeof(float)<<" byte"<<endl;
  cout<<"Minimum value for int: "<<numeric_limits<int>::min()<<endl;
  cout<<"Maximum value for int: "<<numeric_limits<int>::max()<<endl;
  cout<<"Minimum value for using int: "<<numeric_limits<unsigned int>::min()<<endl;
  cout<<"Maximum value for using int: "<<numeric_limits<unsigned int>::max()<<endl;
  return 0; 

}
