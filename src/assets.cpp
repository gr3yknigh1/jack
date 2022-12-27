#include "utils.hpp"


const char* GetAssetsDir() {
    return ASSETS_FOLDER_PATH;
}

const char* GetAssetPath(const char* assetPath) {
    return JoinPath(GetAssetsDir(), assetPath);
}
