    #include "FileStatistics.hpp"


    FileStatistics::FileStatistics()
    {
        std::cout << "Pass File Path as Argument" << std::endl;
        exit(1);
    }
        
    FileStatistics::FileStatistics(std::string filename)
    {
        path = filename;
    }


    bool FileStatistics::processFile()
    {
        std::ifstream file(path);

        if(!file.is_open())
        {
            std::cout << "Cannot Open file" << std::endl;
            exit(1);
        }

        std::string line;
        while(std::getline(file,line))
        {
            lineCount++;

            charCount += line.length();

            std::istringstream lineStream(line);
            std::string word;

            while(lineStream >> word)
                wordCount++;

            for(char c : line)
            {
                if(c == '.' || c == '?' || c == '!')
                    senCount++;
            }
        }

        return true;
    }
        

    void FileStatistics::displayStats()
    {
        std::cout << "Number of lines: " << lineCount << std::endl;
        std::cout << "Number of words: " << wordCount << std::endl;
        std::cout << "Number of characters (including whitespaces): " << charCount << std::endl;
        std::cout << "Number of sentences: " << senCount << std::endl;
    }