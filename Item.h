//
// Created by Samu on 03/03/25.
//

#ifndef ITEM_H
#define ITEM_H

#include "Global.h"

enum Rarity {COMMON = 0, RARE, EPIC, LEGENDARY};

class Item {
public:
    Item(Rarity rarity);
    ~Item();

private:
    Rarity rarity;

};



#endif //ITEM_H
