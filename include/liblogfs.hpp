#pragma once

#include "esp_spiffs.h"
#include "esp_err.h"
#include <string>

class Spiffs {
private:
public:
    esp_vfs_spiffs_conf_t config;
    Spiffs(const char *prefix);
    esp_err_t mount();
    esp_err_t unmount();
};

std::string readFileString(const char *fileName);