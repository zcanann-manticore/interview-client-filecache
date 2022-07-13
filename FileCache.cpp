#include "FileCache.h"

#include <iostream>
#include <iomanip>
#include <fstream>

std::string FileCache::readFileContents(const std::string& fileName) const
{
    std::ifstream fileStream(fileName);
    std::string fileContents((std::istreambuf_iterator<char>(fileStream)), (std::istreambuf_iterator<char>()));
    return fileContents;
}
