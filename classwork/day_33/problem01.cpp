/*

Task 01:

Create an abstract class Car (model, price). Include get and set methods from these
fields. The setPrice Method must be abstract. Create two subclasses Color() and
Company() from Car and include appropriate setPrice method in these classes. Finally
write a code that uses Car class and sub classes to display information about instances

*/

//#include <iostream>
//#include <string>
//using namespace std;
//
//// Abstract Base Class
//class Car {
//protected:
//    string model;
//    float price; // Changed from double to float
//
//public:
//    Car(string model) : model(model), price(0.0f) {}
//    virtual ~Car() {}
//
//    // Getter and Setter for model
//    string getModel() const {
//        return model;
//    }
//
//    void setModel(const string& m) {
//        model = m;
//    }
//
//    // Getter for price
//    float getPrice() const {
//        return price;
//    }
//
//    // Abstract setter for price
//    virtual void setPrice(float p) = 0;
//
//    // Display common info
//    virtual void displayInfo() const {
//        cout << "Model: " << model << endl;
//        cout << "Price: $" << price << endl;
//    }
//};
//
//// Subclass: Color
//class Color : public Car {
//private:
//    string color;
//
//public:
//    Color(string model, string color) : Car(model), color(color) {}
//
//    void setPrice(float p) override {
//        // Add 10% extra for custom color
//        price = p + (p * 0.10);
//    }
//
//    void displayInfo() const override {
//        Car::displayInfo();
//        cout << "Color: " << color << endl;
//    }
//};
//
//// Subclass: Company
//class Company : public Car {
//private:
//    string companyName;
//
//public:
//    Company(string model, string companyName) : Car(model), companyName(companyName) {}
//
//    void setPrice(float p) override {
//        // Add $2000 brand value
//        price = p + 2000.0;
//    }
//
//    void displayInfo() const override {
//        Car::displayInfo();
//        cout << "Company: " << companyName << endl;
//    }
//};
//
//// Main function
//int main() {
//    // Color car instance
//    Color colorCar("Sedan X1", "Red");
//    colorCar.setPrice(30000.0);
//    cout << "--- Color Car Info ---" << endl;
//    colorCar.displayInfo();
//    cout << endl;
//
//    // Company car instance
//    Company companyCar("SUV Z7", "Toyota");
//    companyCar.setPrice(35000.0);
//    cout << "--- Company Car Info ---" << endl;
//    companyCar.displayInfo();
//
//    return 0;
//}
