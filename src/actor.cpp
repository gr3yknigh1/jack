#include "actor.hpp"


Actor::Actor(Vector2 _position, float _speed, Texture2D* _texture, Color _tint=WHITE) :
    Sprite(_position, _texture, _tint), speed(_speed) {
}


Actor::Actor(
    Vector2 _position, float _speed, const char* textureAssetPath, Color _tint=WHITE) :
    Sprite(_position, textureAssetPath, _tint), speed(_speed) {
}

inline void Actor::Move(Vector2 direction, float dt) {
    this->position += dt * speed * GetNormalized(direction) ;
}

inline void Actor::Move(float dx, float dy, float dt) {
    Move({ dx, dy }, dt);
}

