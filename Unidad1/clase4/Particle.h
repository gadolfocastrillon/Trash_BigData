#ifndef PARTICLE_H //Se usa para definir 1 sola vez particula en todo el programa incluido el main y otros archivos.
#define PARTICLE_H

#include <iostream>
#include <cmath> 


class Particle{
 private:
  double *position;
  int dim;
 protected:
  void copy(double *posI, double *posO, int dim);
 public:
  Particle(int dim, double *position);

  Particle(const Particle &p);

  ~Particle();

  void print();

  int getDim();

  double getPosition(int i);

  double distance(Particle p);

  double distance(Particle *p);
}; 
#endif
