// CreditCardPayment.h
#pragma once
#include "IPayment.h"
#include <iostream>

class CreditCardPayment : public IPayment {
public:
    void ProcessPayment(double amount) override {
        std::cout << "Processing credit card payment of amount: " << amount << std::endl;
    }
};

// PayPalPayment.h
#pragma once
#include "IPayment.h"
#include <iostream>

class PayPalPayment : public IPayment {
public:
    void ProcessPayment(double amount) override {
        std::cout << "Processing PayPal payment of amount: " << amount << std::endl;
    }
};

// BankTransferPayment.h
#pragma once
#include "IPayment.h"
#include <iostream>

class BankTransferPayment : public IPayment {
public:
    void ProcessPayment(double amount) override {
        std::cout << "Processing bank transfer payment of amount: " << amount << std::endl;
    }
};
