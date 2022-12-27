#include <iostream>
#include <raylib.h>

#include "actor.hpp"
#include "project_configuration.hpp"


int main() {

    // @NOTE: Project configuration
    const auto config = InitProject(
        ProjectConfiguration(
            "Jack",
            60,
            { 900, 600},
            GetColor(0xCCCCCC)
            )
        );


    auto sdude = Actor();

    // @NOTE: Mainloop
    while (!WindowShouldClose()) {
        float dt = GetFrameTime();
        Vector2 direction = (Vector2){0, 0};

        // @NOTE(gr3yknigh1) Input Handling
        if (IsKeyDown(KEY_RIGHT)) {
            direction.x += 1;
        }
        if (IsKeyDown(KEY_LEFT)) {
            direction.x -= 1;
        }
        if (IsKeyDown(KEY_UP)) {
            direction.y -= 1;
        }
        if (IsKeyDown(KEY_DOWN)) {
            direction.y += 1;
        }

        if (direction.x != 0 or direction.y != 0) {
            sdude.Move(direction, dt);
        }

        BeginDrawing();
        ClearBackground(config.clearColor);
        DrawSprite(sdude);
        EndDrawing();
    }

    return 0;
}
