#include <iostream>
#include <iomanip>


void showbalance(double balance);
double withdraw(double balance);
double deposit();

int main()
{
    double balance = 0;
    int choice;

    do {
    std::cout<<"*************bank************\n";

    std::cout<<"1. balance\n";
    std::cout<<"2. deposit\n";
    std::cout<<"3. withdraw\n";
    std::cout<<"4. exit \n";
    std::cin>>choice;

    std::cin.clear();

    switch (choice)
    {
    case 1: showbalance(balance);
        break;
    case 2: balance += deposit();
            showbalance(balance);
        break;
    case 3: balance -= withdraw(balance);
            showbalance(balance);
        break;
    case 4:
        std::cout<<"Thanks for visiting!\n";
        break;
    default:
        std::cout<<"Invalid choice";
        break;
    }
    }while(choice != 4);


    return 0;
}

    void showbalance(double balance)
    {
        std::cout<<"Your balance is: "<< std::setprecision(2) << std::fixed <<balance<<'\n';
    }

    double withdraw(double balance)
    {
        double amount = 0;
        std::cout<<"enter a amount to be withdrawn: \n";
        std::cin>>amount;

        if(amount > balance)
        {
            std::cout<<"insufficient funds\n";
            return 0;
        }
        else if (amount < 0)
        {
            std::cout<<"That's not a valid amount: \n";
            return 0;
        }
        else 
        {

            return amount;
        }
    }

    double deposit()
    {
        double amount = 0;
        std::cout<<"enter amount to be deposited: \n";
        std::cin >> amount;
        
        if(amount > 0)
        {
            return amount;
        }
        else
        {
            std::cout<<"That's not a valid amount: \n";
            return 0;
        }
    }