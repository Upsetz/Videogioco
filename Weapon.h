//
// Created by Samu on 03/03/25.
//

#ifndef WEAPON_H
#define WEAPON_H
#include "Item.h"

class Weapon : public Item {
public:
    Weapon(float atkspe, float dmg, float range);
    ~Weapon();
private:
    float atkspe;
    float dmg;
    float range;
};



#endif //WEAPON_H
