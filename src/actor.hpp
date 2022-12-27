#ifndef ACTOR_HPP
#define ACTOR_HPP

#include <raylib.h>

#include "sprite.hpp"
#include "utils.hpp"


struct Actor : public Sprite {
    float speed;

    Actor(Vector2 _position, float _speed, Texture2D* _texture, Color _tint);
    Actor(Vector2 _position, float _speed, const char* textureAssetPath, Color _tint);

    void Move(Vector2 direction, float dt);
    void Move(float dx, float dy, float dt);
};


#endif // ACTOR_HPP
