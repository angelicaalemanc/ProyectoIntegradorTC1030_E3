#include "Episodio.h"

// Constructor default
Episodio::Episodio(){tituloEpisodio = "";}
// Constructor
Episodio::Episodio(string TituloEpisodio){tituloEpisodio = TituloEpisodio;}
// Método set de la clase Episodio
void Episodio::setTituloEpisodio(string TituloEpisodio){tituloEpisodio = TituloEpisodio;}
// Método get de la clase Episodio
string Episodio::getTituloEpisodio(){return tituloEpisodio;}
