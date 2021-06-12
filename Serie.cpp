#include "Serie.h"

// Constructor default
Serie::Serie(){
  int id;
  string nombre;
  float duracionH;
  string genero;
}
// Constructor
Serie::Serie(int Id, string Nombre,float DuracionH, string Genero, vector <Temporada> ContenidoSerie){
  id = Id;
  nombre = Nombre;
  duracionH = DuracionH;
  genero = Genero;
  contenidoSerie = ContenidoSerie;
}
// Otros métodos
float Serie::evaluar(){
  float calificacionSerie;
  for(int i =0; i<contenidoSerie.size();i++){
    calificacionSerie = calificacionSerie + contenidoSerie[i].getCalificacionTemp();
  }
  calificacionSerie = calificacionSerie/contenidoSerie.size();
  return calificacionSerie;
}
