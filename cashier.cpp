#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int quantity;
    float payment;
    float change;
    bool hasntPaid = true;
    float amountDue;
    float vat;
    float vatToAdd;
    float vatableAmount;

    cout<<"Welcome to Lollipops Factory!\nSweet and minty Lollipops! How many would you want to buy?"<<endl<<"Quantity: ";
    cin>>quantity;
    setprecision(2);
    amountDue = quantity * 5;
    printf("You have bought %d Sweet and minty Lollipops! Please pay Php %.2f\n", quantity, amountDue);
    cout<<"Amount of cash to pay: ";
    
    while (hasntPaid)
    {
        cin>>payment;
        change = payment - amountDue;

        try
        {
        if (payment < amountDue) {
            throw(payment);
        }
        else {
            cout<<endl;
            vatableAmount = (amountDue / 1.12);
            vat = 0.12 * vatableAmount;
            cout<<"Please examine the transaction details below:"<<endl<<endl;
            printf("Amount Due(VAT inclusive)\t Php %.2f\nVAT(12%):\t\t\t Php %.2f \nVATable Amount:\t\t\t Php %.2f\nAmount of Cash:\t\t\t Php %.2f \nChange:\t\t\t\t Php %.2f \nThanks and enjoy our lollipops!",
            amountDue, vat, vatableAmount, payment, change);
            hasntPaid = false;
        }
        }
        catch(float pay)
        {
            cout<<"Please pay a sufficient amount!"<<endl;
            cout<<"Php: ";  
        }

    }
    cout<<endl;
    system("pause");
    return 0;

}

