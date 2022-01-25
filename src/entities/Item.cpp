#include "Item.hpp"

namespace Pacenstein {
    Item::Item(const float x, const float y, unsigned int p):
        Entity({x, y}, {0, 0}, {0, 0}),
        points(p)
    {}

    Item::Item(const sf::Vector2f xy, unsigned int p):
        Item(xy.x, xy.y, p)
    {}

    unsigned int Item::getPoints() { return this->points; }
}
