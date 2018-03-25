#ifndef _GEGNER_SCHIENENVIECH_HPP_
#define _GEGNER_SCHIENENVIECH_HPP_

#include "GegnerClass.hpp"
#include "enemies/Gegner_Stuff.hpp"

class GegnerSchienenViech : public GegnerClass {
  public:
    GegnerSchienenViech(int Wert1,
                        int Wert2,  // Konstruktor
                        bool Light);
    void GegnerExplode();  // Gegner explodiert
    void DoKI();           // Gegner individuell mit KI bewegen
    void DoDraw();         // eigene Drawfunktion
};

#endif
