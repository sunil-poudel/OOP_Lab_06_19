//6.	Create a class Customer with attributes customer name, product bought and paid amount.
// Create suitable methods to take and display the information with a clause that if amount paid
// is greater than 2000 then a discount of 5% given else no discount is granted.

#include <iostream>
using namespace std;

class Customer{
private:
    string name;
    int productId;
    float paid;
    string display;

public:
    void takeInformation(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter product option: \n1. drawing board: Rs. 1200.\n2. study table: Rs. 2100 \n3. football: Rs. 1000"<<endl;
        cin>>productId;
        if(productId==1) {
            paid = 1200;
            display = "Pay: Rs."+ to_string(paid)+" for drawing board.";
        }
        else if(productId==2) {
            paid = 2100 - (0.05 * 2100);
            display = "Pay: Rs."+ to_string(paid) + " with 5% discount from Rs. 2100 for study table.";
        } else if(productId==3){
            paid = 1000;
            display = "Pay: Rs."+to_string(paid)+" for football.";
        }
    }

    void displayInformation(){
        cout<<display<<endl;
    }
};

int main() {
    Customer customer;
    customer.takeInformation();
    customer.displayInformation();
}