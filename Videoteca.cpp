#include "Videoteca.h"

// Constructores default
Videoteca::Videoteca(){
  nombreVideoteca = "";
}
// Constructor
Videoteca::Videoteca(string NombreVideoteca,vector <Serie> VideosSerie, vector <Pelicula> VideosPelicula){
  nombreVideoteca =  NombreVideoteca;
  videosSerie = VideosSerie;
  videosPelicula = VideosPelicula;
}
// Métodos setters de la clase
void Videoteca::setNombreVideoteca(string NombreVideoteca){nombreVideoteca = NombreVideoteca;}
// Método get de la clase
string Videoteca::getNombreVideoteca(){return nombreVideoteca;}

// otros métodos
void Videoteca::agregarVideo(vector <Serie> Serie){
  for(int i=0;i<Serie.size();i++){
    videosSerie.push_back(Serie[i]);
  }
}
