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
