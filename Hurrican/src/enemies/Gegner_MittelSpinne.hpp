#ifndef _GEGNER_MITTELSPINNE_HPP_
#define _GEGNER_MITTELSPINNE_HPP_

#include "GegnerClass.hpp"
#include "enemies/Gegner_Stuff.hpp"

class GegnerMittelSpinne : public GegnerClass {
  private:
    float rot;
    float WalkDelay;
    float shotdelay;
    float yStart;

  public:
    GegnerMittelSpinne(int Wert1, int Wert2, bool Light);
    void GegnerExplode();  // Gegner explodiert
    void DoKI();           // Gegner individuell mit seiner eigenen kleinen KI bewegen
    void DoDraw();         // Gegner individuell rendern
};

#endif
