#ifndef movableEntity_hpp
#define movableEntity_hpp

#include "entity.hpp"

/*This class is an interface, or something only meant to 
be inherited by children class to ensure they have the 
following functionality*/

class MovableEntity : public Entity 
{
public:
    void Update();
    void Draw() const;
    Rectangle getHitBox() const;
};

#endif /* movableEntity_hpp */
