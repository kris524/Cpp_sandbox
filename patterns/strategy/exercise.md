Exercise: Implement a Payment System with the Strategy Pattern

Imagine you are developing a payment system for an e-commerce application. You want to implement different payment methods (e.g., credit card, PayPal, and Bitcoin) using the Strategy Pattern. Each payment method should be encapsulated as a separate strategy. The context class should allow customers to choose and switch between payment methods dynamically.

Define a strategy interface PaymentStrategy with a method for making payments.

Implement three concrete payment strategies: CreditCardPayment, PayPalPayment, and BitcoinPayment. Each should have its own implementation for making a payment.

Create a context class PaymentContext that accepts a payment strategy and provides a method for customers to make payments.

Write a client code that demonstrates how a customer can choose and use different payment methods at runtime.

Your task is to implement this payment system using the Strategy Pattern, and ensure that you can switch between different payment methods without modifying the client code.