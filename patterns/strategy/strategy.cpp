#include <string>
#include <iostream> 


class PaymentStrategy {

    public: 
        virtual ~PaymentStrategy() = default;
        virtual void payment_strat() {}

};


class CreditCardPayment : public PaymentStrategy{
    
    public:
        void payment_strat() override {
            std::cout << "Credit Card Payment" << std::endl;
        }

};

class PayPalPayment : public PaymentStrategy {
    public:
        void payment_strat() override {
            std::cout << "PayPal Payment" << std::endl;
        }
};


class BitcoinPayment : public PaymentStrategy {
    public:
        void payment_strat() override {
            std::cout << "Bitcoin Payment" << std::endl;
        }

};

class PaymentContext  {

    private:
        PaymentStrategy* strategy_;

    public:

        PaymentContext(PaymentStrategy* strategy = nullptr) : strategy_(strategy) {}

        void set_strategy(PaymentStrategy* strategy) {
            strategy_ = strategy;
        }

        const PaymentStrategy* get_strategy() const {
            return strategy_;
        }

        void applyPaymentStrat() {
            if (strategy_) {
            strategy_->payment_strat();
            }
            else {
                std::cout<<"No payment strategy set"<< std::endl;
            }
        }

};


int main() {

    BitcoinPayment bitcoin;
    PayPalPayment paypal;
    CreditCardPayment credit;


    PaymentContext context;
    context.applyPaymentStrat();
    
    context.set_strategy(&bitcoin);
    context.applyPaymentStrat();
    
    context.set_strategy(&paypal);
    context.applyPaymentStrat();

    context.set_strategy(&credit);
    context.applyPaymentStrat();

    return 0
}