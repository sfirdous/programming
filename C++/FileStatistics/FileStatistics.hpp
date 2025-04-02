#include <iostream>
#include <fstream>
#include <cctype>
#include <sstream>

class FileStatistics
{
private:
    int charCount = 0;
    int wordCount = 0;
    int senCount = 0;
    int lineCount = 0;
    std::string path;

public:
    FileStatistics();
    FileStatistics(std::string filename);

    bool processFile();
    void displayStats();
};