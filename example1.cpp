#include "Order.h"
#include "CreditCardPayment.h"
#include "CourierDelivery.h"
#include "EmailNotification.h"
#include "DiscountCalculator.h"

// Конкретные классы скидок
class BlackFridayDiscount : public IDiscount {
public:
    double ApplyDiscount(double total) override {
        return total * 0.7; // 30% скидка
    }
};

int main() {
    // Создаем заказ
    Order order;
    order.AddItem("Laptop", 1, 1000.0);
    order.AddItem("Mouse", 2, 50.0);

    // Устанавливаем методы оплаты, доставки и уведомлений
    order.SetPaymentMethod(new CreditCardPayment());
    order.SetDeliveryMethod(new CourierDelivery());
    order.SetNotificationMethod(new EmailNotification());

    // Создаем и применяем
    DiscountCalculator discountCalculator;
    discountCalculator.AddDiscount(new BlackFridayDiscount());

    double totalWithDiscount = discountCalculator.CalculateDiscountedPrice(order.GetTotalCost());
    std::cout << "Total with discount: " << totalWithDiscount << std::endl;

    // Обрабатка
    order.ProcessOrder();

    return 0;
}
