// DiscountCalculator.h
#pragma once
#include "IDiscount.h"
#include <vector>

class DiscountCalculator {
private:
    std::vector<IDiscount*> discounts;
public:
    void AddDiscount(IDiscount* discount) {
        discounts.push_back(discount);
    }

    double CalculateDiscountedPrice(double total) {
        for (auto discount : discounts) {
            total = discount->ApplyDiscount(total);
        }
        return total;
    }

    ~DiscountCalculator() {
        for (auto discount : discounts) {
            delete discount;
        }
    }
};
