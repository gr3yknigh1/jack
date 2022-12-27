#ifndef PROJECT_CONFIGURATION_HPP
#define PROJECT_CONFIGURATION_HPP

#include <raylib.h>


struct ProjectConfiguration {
    const char* title;
    const int targetFps;

    Vector2 windowSize;
    Color clearColor;

    ProjectConfiguration(
        const char* _title,
        const int _targetFps,
        Vector2 _windowSize,
        Color _clearColor
        ): title(_title),
           targetFps(_targetFps),
           windowSize(_windowSize),
           clearColor(_clearColor) {}
};


const ProjectConfiguration& InitProject(const ProjectConfiguration&& config);

#endif // PROJECT_CONFIGURATION_HPP
