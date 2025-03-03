//
// Created by Samu on 03/03/25.
//

#ifndef CHARACTER_H
#define CHARACTER_H
#include "Entity.h"


class Character : public Entity  {
public:
    Character(float hp, float speed, float mp, float armor, float mr, float bd);
    ~Character();
private:

};



#endif //CHARACTER_H
