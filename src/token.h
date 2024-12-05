#pragma once

#include <iostream>

class Token
{
public:
    Token(std::string name);
    virtual ~Token();

    virtual std::string getName();

protected:
    std::string _name{};
};