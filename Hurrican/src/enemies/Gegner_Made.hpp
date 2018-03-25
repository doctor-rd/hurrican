#ifndef _GEGNER_MADE_HPP_
#define _GEGNER_MADE_HPP_

#include "GegnerClass.hpp"
#include "enemies/Gegner_Stuff.hpp"

class GegnerMade : public GegnerClass {
  private:
    float movesin;

  public:
    GegnerMade(int Wert1,
               int Wert2,  // Konstruktor
               bool Light);
    void GegnerExplode();  // Gegner explodiert
    void DoKI();           // Gegner individuell mit seiner KI bewegen
    void DoDraw();         // eigene draw routine
};

#endif
