#include "token.h"

Token::Token(std::string name) : _name{name} {}
Token::~Token() = default;

std::string Token::getName()
{
    return _name;
}