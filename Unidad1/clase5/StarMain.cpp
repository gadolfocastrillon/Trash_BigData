#include <Star.h>
#include <Particle.h>
int main(){
  double possun[] = {0,0,0};
  double possirio[] ={1,1,1};
  Star sun(possun,1.989*10e30, 5778, "sun");
  Star sirio(possirio, sun.getMass()/5, 9940, "sirio");
  
  cout<<"La masa de nuestra estrella es = "<<sun.getMass()<<endl;
  cout<<"La distancia entre el sol y sirio es = "<<sun.distance(sirio)<<endl;

  return 0; 
}
