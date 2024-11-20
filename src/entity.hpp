#ifndef entity_hpp
#define entity_hpp

#include <raylib.h>
#include <iostream>

/*This class is an interface, or something only meant to 
be inherited by children class to ensure they have the 
following functionality*/

class Entity {
public:
    void Update();
    void Draw() const;
    Rectangle getHitBox() const;
};

#endif /* pacman_h */
