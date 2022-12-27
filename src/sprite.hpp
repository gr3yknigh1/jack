#ifndef SPRITE_HPP
#define SPRITE_HPP

#include <memory>
#include <raylib.h>


struct Sprite {
    Vector2 position;
    std::unique_ptr<Texture2D> texture;
    Color tint;

    Sprite(Vector2 _position, Texture2D* _texture, Color _tint=WHITE) :
        position(_position), texture(_texture), tint(_tint) {}

    Sprite(Vector2 _position, const char* textureAssetPath, Color _tint=WHITE) :
        position(_position), tint(_tint) {
        const auto texture = LoadTexture(
            GetAssetPath("sdude.png")
            );
        this->texture = std::make_unique<Texture2D>(texture);
    }

    void Translate(Vector2 delta) {
        this->position += delta;
    }

    void Translate(float dx, float dy) {
        this->position += (Vector2){ dx, dy };
    }
};


void DrawSprite(Sprite& sprite);

#endif // SPRITE_HPP
