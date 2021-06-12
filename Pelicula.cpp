#include "Pelicula.h"

// Constructor default
Pelicula::Pelicula(){
  id = 0;
  nombre = "";
  duracionH = 0;
  genero = "";
  calificacionPelicula = 0.0;
}
// Constructor
Pelicula::Pelicula(int Id, string Nombre,float DuracionH, string Genero, float CalificacionPelicula){
  id = Id;
  nombre = Nombre;
  duracionH = DuracionH;
  genero = Genero;
  calificacionPelicula = evaluar(CalificacionPelicula);
}
// Método set de la clase Pelicula
float Pelicula::getCalificacionPelicula(){return calificacionPelicula;}
// Otros métodos
void Pelicula::print(){
  cout << "Id: " << getId() <<endl;
  cout << "Película: " << getNombre() <<endl;
  cout << "Duración (h): " << getDuracionH() <<endl;
  cout << "Género: " << getGenero() <<endl;
  cout << "Calificación: " << getCalificacionPelicula() <<endl;
  cout << "\n" << endl;
}
float Pelicula::evaluar(float CalificacionPelicula){
  calificacionPelicula = CalificacionPelicula;
  return calificacionPelicula;
}
