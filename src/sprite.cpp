#include <raylib.h>

#include "sprite.hpp"


void DrawSprite(Sprite& sprite) {
    return DrawTexture(
        *sprite.texture,
        sprite.position.x,
        sprite.position.y,
        sprite.tint
        );
}
