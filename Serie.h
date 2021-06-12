#ifndef SERIE_H
#define SERIE_H
#include "Video.h"
#include "Temporada.h"

class Serie:public Video {
  public:
  // Atributos de la clase Serie
  vector <Temporada> contenidoSerie;

  public:
  // Constructores de la clase
  Serie();
	Serie(int, string, float, string, vector <Temporada>);
  // Otros métodos
  void print(); //getContenidoSerie
  float evaluar();
};
#endif
