#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Video {
  protected:
  // Atributos de la clase Video
  int id;
  string nombre;
  float duracionH;
  string genero;
  
  public:
  // Constructores de la clase 
  Video();
  Video(int, string, float, string);
  // Métodos setters de la clase
  void setId(int);
  void setNombre(string);
  void setDuracionH(float);
  void setGenero(string);
  // Métodos getters de la clase
  int getId();
  string getNombre();
  float getDuracionH();
  string getGenero();
  // Otros métodos
  virtual float evaluar();
  virtual void print();  
};
#endif
