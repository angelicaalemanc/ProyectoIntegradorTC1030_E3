#include "Videoteca.h"
#include "Serie.h"
#include "Pelicula.h"

int main(){

  Videoteca VT1;
  VT1.setNombreVideoteca("Nefi");

  Pelicula P1(1, "27 dresses", 2, "Comedia", 0);
  P1.evaluar(99);

  Pelicula P2(2, "The Ugly Truth", 1.5, "Comedia Romántica", 0);
  P2.evaluar(95.5);

  Temporada S1T1(1, 0, {});
  Temporada S1T2(2, 0, {});
  S1T1.evaluar(96);
  S1T2.evaluar(98);
  Episodio S1_E11("Piloto");
  Episodio S1_E12("La ruta panorámica");
  Episodio S1_E21("El último engaño"); 
  Episodio S1_E22("Todo ha cambiado");
  Episodio S1_E23("Harvey");
  S1T1.enlistarEpisodio({S1_E11,S1_E12});
  S1T2.enlistarEpisodio({S1_E21,S1_E22, S1_E23});
  Serie S1(3, "Suits", 3.75, "Drama", {S1T1,S1T2});

  Temporada S2T1(1, 0, {});
  Temporada S2T2(2, 0, {});
  S2T1.evaluar(94);
  S2T2.evaluar(99);
  Episodio S2_E11("Pilot");
  Episodio S2_E12("Lucifer, Stay. Good Devil");
  Episodio S2_E21("Everything's Coming Up Lucifer"); 
  Episodio S2_E22("Liar, Liar, Slutty Dress on Fire»");
  S2T1.enlistarEpisodio({S2_E11,S2_E12});
  S2T2.enlistarEpisodio({S2_E21,S2_E22});
  Serie S2(4, "Lucifer", 3, "Ficcion", {S2T1,S2T2});
  
  Temporada S3T1(1, 0, {});
  Temporada S3T2(2, 0, {});
  S3T1.evaluar(90);
  S3T2.evaluar(92);
  Episodio S3_E11("A Hard Day's Night");
  Episodio S3_E12("The First Cut is the Deepest");
  Episodio S3_E21("Raindrops Keep Falling on My Head"); 
  Episodio S3_E22("Enough is Enough (No More Tears)");
  S3T1.enlistarEpisodio({S3_E11,S3_E12});
  S3T2.enlistarEpisodio({S3_E21,S3_E22});
  Serie S3(5, "Grey's Anatomy", 3, "Drama", {S3T1,S3T2});

  VT1.agregarVideo({P1});
  VT1.agregarVideo({P2});
  VT1.agregarVideo({S1});
  VT1.agregarVideo({S2});
  VT1.agregarVideo({S3});
  VT1.enlistar();

  return 0;
}
