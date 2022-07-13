#include "FileCache.h"

#include <iostream>
#include <string>
 
int main(int argc, char *argv[])
{
    FileCache fileCache;
    std::string dictionary = fileCache.getFileContents("Files/Dictionary.txt");
    std::string names = fileCache.getFileContents("Files/Names.txt");

    std::cout << "dictionary file size: " << dictionary.length() << std::endl;
    std::cout << "names file size: " << names.length() << std::endl;

    return EXIT_SUCCESS;
}
