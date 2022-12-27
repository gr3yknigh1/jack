#include <raylib.h>

#include "project_configuration.hpp"

const ProjectConfiguration& InitProject(const ProjectConfiguration&& config) {
    InitWindow(config.windowSize.x, config.windowSize.y, config.title);
    SetTargetFPS(config.targetFps);
    SetTraceLogLevel(LOG_TRACE);
    return config;
}

