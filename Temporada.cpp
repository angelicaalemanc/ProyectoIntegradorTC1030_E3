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
// Métodos setters de la clase Temporada
void Temporada::setNumeroTemp(int NumeroTemp){numeroTemp = NumeroTemp;}
// Métodos getters de la clase Temporada
int Temporada::getNumeroTemp(){return numeroTemp;}
float Temporada::getCalificacionTemp(){return calificacionTemp;}
// Otros métodos
void Temporada::enlistarEpisodio(vector <Episodio> Enlistar){
  for(int i=0;i<Enlistar.size();i++){
    contenidoTemp.push_back(Enlistar[i]);
  }
}
float Temporada::evaluar(float CalificacionTemp){
  calificacionTemp = CalificacionTemp;
  return calificacionTemp;
}
int Temporada::tamanoTemp(){
  int tam = contenidoTemp.size();
  return tam;
}

void Temporada::printEp(){
  cout << "Temporada " << numeroTemp << ": "<< endl;
  for(int i=0;i<contenidoTemp.size();i++){
    cout << "Episodio " << i+1 << ": ";
    cout << contenidoTemp[i].getTituloEpisodio() << endl;
  }
  cout << "\n" << endl;
}
