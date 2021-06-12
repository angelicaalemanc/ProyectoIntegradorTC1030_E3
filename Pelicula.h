#ifndef PELICULA_H
#define PELICULA_H
#include "Video.h"

class Pelicula:public Video{
  public:
  // Atributos de la clase Pelicula
  float calificacionPelicula;

  public: 
  // Constructores de la clase	
  Pelicula();
  Pelicula(int, string, float, string, float);
  // Método set de la clase
  float getCalificacionPelicula();
  // Otros métodos
  void print();
  float evaluar(float);
};
#endif
