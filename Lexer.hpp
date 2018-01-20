// Lexer.hpp
#ifndef LEXER_HPP
#define LEXER_HPP

#include <string>

class Lexer {
public:
    enum TokenType {
    };

    struct Token {
        TokenType type;
        std::string content;
    };

    Lexer();
};

#endif // LEXER_HPP
