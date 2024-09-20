// IPayment.h
#pragma once

class IPayment {
public:
    virtual void ProcessPayment(double amount) = 0;
    virtual ~IPayment() = default;
};

// IDelivery.h
#pragma once
#include "Order.h"

class IDelivery {
public:
    virtual void DeliverOrder(const Order& order) = 0;
    virtual ~IDelivery() = default;
};

// INotification.h
#pragma once

class INotification {
public:
    virtual void SendNotification(const std::string& message) = 0;
    virtual ~INotification() = default;
};

// IDiscount.h
#pragma once

class IDiscount {
public:
    virtual double ApplyDiscount(double total) = 0;
    virtual ~IDiscount() = default;
};
