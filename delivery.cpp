// CourierDelivery.h
#pragma once
#include "IDelivery.h"
#include <iostream>

class CourierDelivery : public IDelivery {
public:
    void DeliverOrder(const Order& order) override {
        std::cout << "Delivering order by courier." << std::endl;
    }
};

// PostDelivery.h
#pragma once
#include "IDelivery.h"
#include <iostream>

class PostDelivery : public IDelivery {
public:
    void DeliverOrder(const Order& order) override {
        std::cout << "Delivering order by post." << std::endl;
    }
};

// PickUpPointDelivery.h
#pragma once
#include "IDelivery.h"
#include <iostream>

class PickUpPointDelivery : public IDelivery {
public:
    void DeliverOrder(const Order& order) override {
        std::cout << "Order available for pick up at point." << std::endl;
    }
};
