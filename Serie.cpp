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
void Serie::print(){
  int ep = 0;
  for(int i =0; i<contenidoSerie.size();i++){
    ep = ep + contenidoSerie[i].tamanoTemp();
  }
  cout << "Id: " << getId() <<endl;
  cout << "Serie: " << getNombre() <<endl;
  cout << "Duración (h): " << getDuracionH() <<endl;
  cout << "Género: " << getGenero() <<endl;
  cout << "Calificación: " << evaluar() <<endl;
  cout << "Temporadas: " << contenidoSerie.size() <<endl;
  cout << "Episodios Totales: " << ep <<endl;
  cout << "\n" << endl;
  for(int i =0; i<contenidoSerie.size();i++){
    contenidoSerie[i].printEp();
  }
}
