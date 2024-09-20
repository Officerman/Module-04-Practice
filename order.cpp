// Order.h
#pragma once
#include <vector>
#include <string>

class IPayment;
class IDelivery;
class INotification;

class Order {
private:
    std::vector<std::string> items;
    std::vector<int> quantities;
    std::vector<double> prices;
    double totalCost = 0.0;
    IPayment* payment;
    IDelivery* delivery;
    INotification* notification;

public:
    void AddItem(const std::string& item, int quantity, double price) {
        items.push_back(item);
        quantities.push_back(quantity);
        prices.push_back(price);
        totalCost += quantity * price;
    }

    double GetTotalCost() const {
        return totalCost;
    }

    void SetPaymentMethod(IPayment* payMethod) {
        payment = payMethod;
    }

    void SetDeliveryMethod(IDelivery* deliveryMethod) {
        delivery = deliveryMethod;
    }

    void SetNotificationMethod(INotification* notificationMethod) {
        notification = notificationMethod;
    }

    void ProcessOrder() {
        payment->ProcessPayment(totalCost);
        delivery->DeliverOrder(*this);
        notification->SendNotification("Your order has been processed.");
    }
};
