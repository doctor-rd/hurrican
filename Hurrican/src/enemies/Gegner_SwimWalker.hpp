#ifndef _GEGNER_SWIMWALKER_H
#define _GEGNER_SWIMWALKER_H

#include "GegnerClass.hpp"
#include "Gegner_Stuff.hpp"

class GegnerSwimWalker : public GegnerClass {
  public:
    GegnerSwimWalker(int Wert1,
                     int Wert2,  // Konstruktor
                     bool Light);
    void GegnerExplode();  // Gegner explodiert
    void DoKI();           // Gegner individuell mit seiner
    // eigenen kleinen KI bewegen
};

#endif
