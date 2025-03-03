//
// Created by Samu on 03/03/25.
//

#ifndef ITEM_H
#define ITEM_H


enum Rarity{COMMON=0, RARE, EPIC, LEGENDARY};
class Item {

public:
    Item(Rarity rarity);
private:
    Rarity rarity;
};



#endif //ITEM_H
