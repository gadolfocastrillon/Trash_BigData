#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int>vector1={1,2,3,4};
  vector<int>vector2={1,2,3,4};
  vector<vector <int>>vectorT = {vector1,vector2};
  for (int i=0; i<vectorT.size();i++){
    cout<<i<<endl;
    for(int j=0;j<vectorT[i].size();j++){
      cout<<&vectorT[i][j]<<endl;
  }
  }
  
  
  return 0; 
}
