// EmailNotification.h
#pragma once
#include "INotification.h"
#include <iostream>

class EmailNotification : public INotification {
public:
    void SendNotification(const std::string& message) override {
        std::cout << "Sending email notification: " << message << std::endl;
    }
};

// SmsNotification.h
#pragma once
#include "INotification.h"
#include <iostream>

class SmsNotification : public INotification {
public:
    void SendNotification(const std::string& message) override {
        std::cout << "Sending SMS notification: " << message << std::endl;
    }
};
