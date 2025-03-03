//
// Created by Samu on 03/03/25.
//

#ifndef ENTITY_H
#define ENTITY_H

#include "Global.h"

class Entity {
public:
    Entity(float hp, float speed, float mp, float armor, float mr, float bd);
    ~Entity();

private:
    float hp;
    float speed;
    float mp;
    float armor;
    float mr;
    float bd;

};



#endif //ENTITY_H
