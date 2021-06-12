#ifndef TEMPORADA_H
#define TEMPORADA_H
#include "Episodio.h"
#include <vector>

class Temporada{
  private:
  // Atributos de la clase Temporada
  int numeroTemp;
  float calificacionTemp;
  vector <Episodio> contenidoTemp;

  public:
  // Constructores de la clase
  Temporada();
  Temporada(int,float,vector<Episodio>);
  // Métodos setters de la clase
  void setNumeroTemp(int);
  // Métodos getters de la clase
  int getNumeroTemp();
  float getCalificacionTemp();
  // Otros métodos
  void enlistarEpisodio(vector <Episodio>); // getContenidoTemp
  float evaluar(float); // setCalificacionTemp
  int tamanoTemp(); //Auxiliar para clase Serie

  // imprimir episodios
  void printEp();
};
#endif
