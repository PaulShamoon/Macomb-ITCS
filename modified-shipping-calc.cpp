#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main() {

    //variables
    string item_name;
    string item_destination;
    string item_fragility;
    double order_total;
    double shipping_cost;
    double total_cost;
    double additional_charge = 0;
    ofstream my_file;
    ofstream my_file_two;

    //entering item name
    cout << "Please enter the item name (no space)...........:";
    cin >> item_name;

    //entering item fragility
    cout << "Is the item fragile? (y=yes/n=no)................:";
    cin >> item_fragility;

    //additional charge for fragile items
    if (item_fragility == "y" || "Y") {
        additional_charge = 2.00; 
    }

    if (item_fragility != "y" && item_fragility != "Y" && item_fragility != "n" && item_fragility != "N") {
        cout << "Invalid entry, exiting" << endl;
        exit(1);
    }

    //entering order total
    cout << "Please enter your order total....................:";
    cin >> order_total;

    //entering destination
    cout << "Please enter destination.  (usa/can/aus)";
    cin >> item_destination;
    if (item_destination != "usa" && item_destination != "USA" && item_destination != "can" && item_destination != "CAN" && item_destination != "aus" && item_destination != "AUS") {
        cout << "Invalid entry, exiting" << endl;
        exit(1);
    }

    //determining shipping cost to usa
    if (item_destination == "usa") {
        if (order_total <= 50.00) {
            shipping_cost = 6.00 + additional_charge;
        } else if (order_total >= 50.01 && order_total <= 100.00) {
            shipping_cost = 9.00 + additional_charge;
        } else if (order_total >= 100.01 && order_total <= 150.00) {
            shipping_cost = 12.00 + additional_charge;
        } else {
            shipping_cost = 0.00 + additional_charge;
        }
    }

    //determining shipping cost to can
    if (item_destination == "can"){
        if (order_total <= 50.00) {
            shipping_cost = 8.00 + additional_charge;
        } else if (order_total >= 50.01 && order_total <= 100.00) {
            shipping_cost = 12.00 + additional_charge;
        } else if (order_total >= 100.01 && order_total <= 150.00) {
            shipping_cost = 15.00 + additional_charge;
        } else {
            shipping_cost = 0.00 + additional_charge;
        }
    }

    //determining shipping cost to aus
    if (item_destination == "aus") {
        if (order_total <= 50.00) {
            shipping_cost = 10.00 + additional_charge;
        } else if (order_total >= 50.01 && order_total <= 100.00) {
            shipping_cost = 14.00 + additional_charge;
        } else if (order_total >= 100.01 && order_total <= 150.00) {
            shipping_cost = 17.00 + additional_charge;
        } else {
            shipping_cost = 0.00 + additional_charge;
        }
    }

    //assignment outputs
    cout << "................................................." << endl;
    cout << "ITCS 2530  - Programming Assignment For Week #3" << endl;   
    cout << "................................................." << endl;     

    //opening first file
    my_file.open("order.txt");
 
    //output item
    my_file << "Your item is............................" << item_name << endl;

    //output shipping cost
    my_file << "Your shipping cost is...................$" << fixed << setprecision(2) << shipping_cost << endl;

    //closing first file
    my_file.close();

    //opening second file
    my_file_two.open("jupiter.txt");

    //output shipping location
    my_file_two << "You are shipping to..................................." << item_destination << endl; 

    //output total shipping costs
    total_cost = shipping_cost + order_total;
    my_file_two << "Your total shipping costs are.........................$" << fixed << setprecision(2) << total_cost << endl;

   //closing second file
   my_file_two.close();

} 
