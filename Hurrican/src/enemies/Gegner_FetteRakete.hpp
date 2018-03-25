#ifndef _GEGNER_FETTERAKETE_HPP_
#define _GEGNER_FETTERAKETE_HPP_

#include "GegnerClass.hpp"
#include "Gegner_Stuff.hpp"

class GegnerFetteRakete : public GegnerClass {
  private:
    float SmokeDelay;
    float rot;

  public:
    GegnerFetteRakete(int Wert1,
                      int Wert2,  // Konstruktor
                      bool Light);
    void GegnerExplode();  // Gegner explodiert
    void DoKI();           // Gegner individuell mit seiner
    void DoDraw();         // Gegner individuell rendern
    // eigenen kleinen KI bewegen
};

#endif
