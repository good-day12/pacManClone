#ifndef wall_h
#define wall_h

#include "entity.hpp"

class Wall : public Entity
{
public:
    Wall();
    void Draw() const;
    Rectangle getHitBox() const;
private:
    Vector2 position;
};

#endif /* wall_h */