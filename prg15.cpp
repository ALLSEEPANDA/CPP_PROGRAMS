#include <bits/stdc++.h>

class FixedDeposit {
private:
    double principal; 
    double interestRate; 
    int duration; 

public:
    FixedDeposit(double p, double r, int d) 
        : principal(p), interestRate(r), duration(d) {}
    double calculateMaturityAmount() {
        return principal + (principal * interestRate * duration) / 100;
    }

    void displayDetails() {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Principal Amount: $" << principal << std::endl;
        std::cout << "Interest Rate: " << interestRate << "%" << std::endl;
        std::cout << "Duration: " << duration << " years" << std::endl;
        std::cout << "Maturity Amount: $" << calculateMaturityAmount() << std::endl;
    }
};

int main() {
    double principal, interestRate;
    int duration;
    std::cout << "Enter Principal Amount: ";
    std::cin >> principal;

    std::cout << "Enter Interest Rate (in %): ";
    std::cin >> interestRate;

    std::cout << "Enter Duration (in years): ";
    std::cin >> duration;

    FixedDeposit fd(principal, interestRate, duration);

    std::cout << std::endl << "Fixed Deposit Details:" << std::endl;
    fd.displayDetails();

    return 0;
}
