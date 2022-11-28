#include "CaesarCipher.hpp"
#include "RunCaesarCipher.hpp"
#include <iostream>


CaesarCipher::CaesarCipher(const std::string inputTextVal, const std::size_t keyVal, CipherMode modeVal)
:inputText_{inputTextVal}, key_{keyVal}, mode_{modeVal}
{
}

CaesarCipher::CaesarCipher(const std::string inputTextVal, const std::string keyVals, CipherMode modeVal)
:inputText_{inputTextVal}, mode_{modeVal}
{
    for (const auto& elem : keyVals) {
            if (!std::isdigit(elem)) {
                std::cerr
                    << "[error] cipher key must be an unsigned long integer for Caesar cipher,\n"
                    << "        the supplied key (" << keyVals
                    << ") could not be successfully converted" << std::endl;
                std::exit(-1);
            }
        }
    
    this->key_ = std::stoul(keyVals);
}

std::string CaesarCipher::applyCipher()
{
    bool encrypt{this->mode_ == CipherMode::Encrypt};
    return runCaesarCipher(this->inputText_, this->key_,encrypt);
    //This is very lazy, sorry
}


