//
// Created by STZ on 6/15/22.
//
#include "Account.h"
#include <utility>

Account::Account(std::string name, double balance)
        : name{std::move(name)}, balance{balance} {
}

bool Account::deposit(double amount) {
    if (amount < 0) {
        return false;
    } else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

void Account::print(std::ostream &os) const {
    os << "[Account: " << name << ": " << balance << "]";
}
