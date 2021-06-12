#include "Video.h"
#include <iostream>
using namespace std;

// Constructor default
Video::Video(){
  id = 0;
  nombre = "";
  duracionH = 0;
  genero = "";
}
// Constructor
Video::Video(int Id, string Nombre,float DuracionH, string Genero){
  id = Id;
  nombre = Nombre;
  duracionH = DuracionH;
  genero = Genero;
}
// métodos getters de la clase Video
int Video::getId(){return id;}
string Video::getNombre(){return nombre;}
float Video::getDuracionH(){return duracionH;}
string Video::getGenero(){return genero;}
// métodos setters de la clase Video
void Video::setId(int Id){id = Id;}
void Video::setNombre(string Nombre){nombre = Nombre;}
void Video::setDuracionH(float DuracionH){duracionH = DuracionH;}
void Video::setGenero(string Genero){genero = Genero;}
// otros métodos
float Video::evaluar(){
  float evaluacion = 0.0;
  return evaluacion;
}
void Video::print(){
    int ep = 0;
  cout << "Id: " << getId() <<endl;
  cout << "Nombre: " << getNombre() <<endl;
  cout << "Duración (h): " << getDuracionH() <<endl;
  cout << "Género: " << getGenero() <<endl;
  cout << "Calificación: " << evaluar() <<endl;
}
