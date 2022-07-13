#include <iostream>
#include <map>
#include <string>
#include <vector>

class FileCache
{
public:
    // TODO: Implement caching!
	std::string getFileContents(const std::string& fileName)
	{
		// Read all file contents (potentially very slow!)
		std::string fileContents = readFileContents(fileName);

		return fileContents;
	}

private:
    // Helper function (already implemented in cpp file)
	std::string readFileContents(const std::string& fileName) const;
};
