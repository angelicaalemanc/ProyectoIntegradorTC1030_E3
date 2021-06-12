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
