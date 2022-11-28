#ifndef CAESARCIPHER
#define CAESARCIPHER

#include "CipherMode.hpp"

#include<string>

class CaesarCipher{
    public:
        explicit CaesarCipher(const std::string inputTextVal, const std::size_t keyVal, CipherMode modeVal);
        explicit CaesarCipher(const std::string inputTextVal, const std::string keyVal, CipherMode modeVal);

        std::string inputText_;
        std::size_t key_;
        CipherMode mode_;

        std::string applyCipher();
};

#endif
