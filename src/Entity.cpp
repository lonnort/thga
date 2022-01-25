#include "Entity.hpp"

namespace Pacenstein {
    Entity::Entity(float px, float py, float dx, float dy, float sx, float sy, float ms, float bs):
        Entity({px, py}, {dx, dy}, {sx, sy}, ms, bs)
    {}

    Entity::Entity(sf::Vector2f pos, sf::Vector2f dir, sf::Vector2f size, float ms, float bs):
        bounding_box(size),
        position(pos),
        direction(dir),
        size(size),
        moveSpeed(ms),
        boundsSize(bs)
    {
        bounding_box.setPosition(pos);
    }

    Entity::Entity():
        Entity(0,0,0,0,0,0,0,0)
    {}

    /***/
    sf::Vector2f Entity::getPos()   { return sf::Vector2f(this->position.x, this->position.y); }

    /***/
    sf::Vector2f Entity::getDir()   { return sf::Vector2f(this->direction.x, this->direction.y); }

    /***/
    float Entity::getBoundsSize()      { return boundsSize; }

    /***/
    sf::FloatRect Entity::getGlobalBounds() { return bounding_box.getGlobalBounds(); }
}
