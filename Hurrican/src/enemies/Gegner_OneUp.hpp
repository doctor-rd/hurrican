#ifndef _GEGNER_ONEUP_HPP_
#define _GEGNER_ONEUP_HPP_

#include "GegnerClass.hpp"
#include "enemies/Gegner_Stuff.hpp"

class GegnerOneUp : public GegnerClass {
  public:
    GegnerOneUp(int Wert1,
                int Wert2,  // Konstruktor
                bool Light);
    void GegnerExplode();  // Gegner explodiert
    void DoKI();           // Gegner individuell mit seiner
    // eigenen kleinen KI bewegen
};

#endif
