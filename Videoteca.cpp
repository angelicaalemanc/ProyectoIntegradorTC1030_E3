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
void Videoteca::agregarVideo(vector <Pelicula> Pelicula){
  for(int i=0;i<Pelicula.size();i++){
    videosPelicula.push_back(Pelicula[i]);
  }
}
void Videoteca::enlistar(){
  cout << "\nBienvenido a " << getNombreVideoteca() << endl;
  cout << "\nCATÁLOGO DE PELÍCULAS: \n" << endl;
  for(int i=0;i<videosPelicula.size();i++){
    videosPelicula[i].print();
  }
 cout << "\nCATÁLOGO DE SERIES: \n" << endl;
  for(int i=0;i<videosSerie.size();i++){
    videosSerie[i].print();
  }
  cout << "\n" << endl;
}
