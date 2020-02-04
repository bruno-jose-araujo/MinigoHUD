#pragma once
#include <string>
#include <vector>

enum LS_FLAGS
{
    LS_ALL = 0x00,
    LS_DIRS = 0x01,
    LS_FILES = 0x02,
};

std::string read_line(const std::string& filename);
bool find_folder(const char* root, const char* prefix, std::string& dest);
bool find_folder(const std::string& root, const std::string& prefix, std::string& dest);
std::vector<std::string> ls(const char* root, const char* prefix = nullptr, LS_FLAGS flags = LS_DIRS);
bool file_exists(const std::string& path);
bool dir_exists(const std::string& path);
