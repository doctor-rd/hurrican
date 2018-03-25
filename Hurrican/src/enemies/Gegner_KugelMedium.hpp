#ifndef _GEGNER_KUGELMEDIUM_HPP_
#define _GEGNER_KUGELMEDIUM_HPP_

#include "GegnerClass.hpp"
#include "enemies/Gegner_Stuff.hpp"

class GegnerKugelMedium : public GegnerClass {
  public:
    GegnerKugelMedium(int Wert1,
                      int Wert2,  // Konstruktor
                      bool Light);
    void GegnerExplode();  // Gegner explodiert
    void DoKI();           // Gegner individuell mit seiner
    // eigenen kleinen KI bewegen
};

#endif
