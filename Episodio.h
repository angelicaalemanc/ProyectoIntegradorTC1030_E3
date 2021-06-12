#ifndef EPISODIO_H
#define EPISODIO_H
#include <iostream>
#include <string>
using namespace std;

class Episodio{
  private:
  // Atributos de la clase Video
  string tituloEpisodio;

  public:
  // Constructores de la clase
  Episodio();
  Episodio(string);
  // Método set de la clase
  void setTituloEpisodio(string);
  // Método get de a clase
  string getTituloEpisodio();
};
#endif
