#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP


#include "CipherMode.hpp" 

#include <string>
#include <vector>

struct ProgramSettings{
    bool helpRequested;
    bool versionRequested;
    std::string inputFile; 
    std::string outputFile;
    std::string cipherKey;
    CipherMode cipherMode;
};

bool processCommandLine(const std::vector<std::string>& cmdLineArgs,
                        ProgramSettings& programSettings);

#endif    // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP