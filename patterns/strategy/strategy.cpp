#include <string>
#include <iostream> 


class PaymentStrategy {

    public: 
        virtual ~PaymentStrategy() = default;
        virtual void payment_strat() {}

};


class CreditCardPayment : public PaymentStrategy{
    
    public:
        std::string type() {
            std::cout << "Credit Card Payment" << std::endl;
        }

};

class PayPalPayment : public PaymentStrategy {
    public:
        std::string type() {
            std::cout << "PayPal Payment" << std::endl;
        }
};


class BitcoinPayment : public PaymentStrategy {
    public:
        std::string type() {
            std::cout << "Bitcoin Payment" << std::endl;
        }

};

class PaymentContext  {


}


int main() {
    
}