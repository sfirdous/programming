#include "FileStatistics.hpp"


int main()
{
    FileStatistics f("D:/Firdous/c-programming/C++/FileStatistics/testfile.txt");
    if(f.processFile())
    {
        f.displayStats();
    }
    return 0;
}