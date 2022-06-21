//
// Created by STZ on 6/15/22.
//
#ifndef CHALLENGE_I_PRINTABLE_H
#define CHALLENGE_I_PRINTABLE_H
#include <iostream>

class I_Printable {
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~I_Printable() = default;
};

#endif //CHALLENGE_I_PRINTABLE_H
