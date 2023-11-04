/*Online Shopping Cart:
​
Create a C++ program that models an online shopping cart system. Define classes 
like Product, ShoppingCart, and Customer. Use abstraction to abstract the 
shopping cart's functionality, such as adding products, calculating the total cost,
and processing the checkout.
​
In this program:
​
The Product class represents products with a name and price.
The ShoppingCart class allows adding products and calculating the total cost of items in the cart.
The Customer class has a shopping cart and can add products to it and process the checkout.*/

#include<iostream>
#include<string.h>
using namespace std;
class Product {
private:
    string name;
    double price;
public:
    Product(string productName, double productPrice) : name(productName), price(productPrice) {}

    string getName() const {
        return name;
    }
    double getPrice() const {
        return price;
    }
};
class ShoppingCart {
private:
    vector<Product> products;

public:
    void addProduct(const Product& product) {
        products.push_back(product);
    }

    double calculateTotal() const {
        double total = 0.0;
        for (const auto& product : products) {
            total += product.getPrice();
        }
        return total;
    }
};

class Customer {
private:
    ShoppingCart cart;
​
public:
    void addToCart(const Product& product) {
        cart.addProduct(product);
     cout << product.getName() << " added to the cart.\n";
    }
​
    void checkout() {
        double totalCost = cart.calculateTotal();
        cout << "Total cost:" << totalCost << "\n";
        cout << "Thank you for shopping with us!\n";
    }
};
​
int main() {
    Product product1("Product 1", 19.99);
    Product product2("Product 2", 29.99);
    Product product3("Product 3", 39.99);
​
    Customer customer;
    customer.addToCart(product1);
    customer.addToCart(product2);
    customer.addToCart(product3);
    customer.checkout();
​
    return 0;
}