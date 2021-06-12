#include "Temporada.h"

// Constructor default
Temporada::Temporada(){
  numeroTemp = 00;
  calificacionTemp = 0.0;
}
// Constructor
Temporada::Temporada(int NumeroTemp,float CalificacionTemp,vector<Episodio> ContenidoTemp){
  numeroTemp = NumeroTemp;
  calificacionTemp = evaluar(CalificacionTemp);
  contenidoTemp = ContenidoTemp;
}
