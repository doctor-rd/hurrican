#ifndef _GEGNER_RAKETENWERFER_HPP_
#define _GEGNER_RAKETENWERFER_HPP_

#include "GegnerClass.hpp"
#include "enemies/Gegner_Stuff.hpp"

class GegnerRaketenwerfer : public GegnerClass {
  public:
    GegnerRaketenwerfer(int Wert1,
                        int Wert2,  // Konstruktor
                        bool Light);
    void GegnerExplode();  // Gegner explodiert
    void DoKI();           // Gegner individuell mit seiner
    // eigenen kleinen KI bewegen
};

#endif
