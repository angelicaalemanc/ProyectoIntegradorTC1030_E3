#ifndef VIDEOTECA_H
#define VIDEOTECA_H
#include "Video.h"
#include "Serie.h"
#include "Pelicula.h"
#include <vector>

class Videoteca{
  private:
  // Atributos de la clase Videoteca
  string nombreVideoteca;
  vector <Serie> videosSerie;
  vector <Pelicula> videosPelicula;

  public:
  // Constructores de la clase
  Videoteca();
  Videoteca(string,vector <Serie>, vector <Pelicula>);
  // Métodos setters de la clase
  void setNombreVideoteca(string);
  // Método get de la clase
  string getNombreVideoteca();
  // otros métodos
  void enlistar();
  void agregarVideo(vector <Serie>);
  void agregarVideo(vector <Pelicula>);
};

#endif
