//libraries
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//function prototypes
void ShowUsage();
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge, int& iTotalXL);
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXL);
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXL);

//main function
int main(){
    //variables
    int small = 0;
    int medium = 0;
    int large = 0; 
    int XL = 0;
    string selection;
    //assignment output
    cout << "************************************************************" << endl;
    cout << "***** Welcome to my Johnny Utah's PointBreak Surf Shop *****" << endl;
    cout << "************************************************************" << endl;
    cout << endl;
    //calling ShowUsage function
    ShowUsage();
    //while loop to keep program running until user enters Q
    while (selection != "q" || selection != "Q"){
        //if statement to call function based on selection choice
        cout << endl;
        cout << "Please enter a selection: ";
        cin >> selection; 
        if (selection == "p" || selection == "P"){
            MakePurchase(small, medium, large, XL);
            continue;
        } else if (selection == "c" || selection == "C"){
            DisplayPurchase(small, medium, large, XL);
            continue;
        } else if (selection == "t" || selection == "T") {
            DisplayTotal(small, medium, large, XL);
            continue;
        } else if (selection == "s" || selection == "S") {
            ShowUsage();
            continue; }
    //exits the program if user enters
    cout << "Thank you" << endl;
    exit(1); } }


//function to show how to use the program
void ShowUsage() {
    cout << "To show program usage  'S'" << endl;
    cout << "To purchase a surfboard press 'P'" << endl;
    cout << "To display current purchases press 'C'" << endl;
    cout << "To display total amount due press 'T'" << endl;
    cout << "To quit the program press 'Q'" << endl; }


//function to purchase surfboards in users choice of quantity and size
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge, int& iTotalXL){
    int quantity = 0;
    string type;
    cout << "Please enter the quantity and type (S=small, M=medium, L=large, XL=extra large) of surfboard you would like to purchase:" << endl;
    cin >> quantity >> type;

    //calculates quantity of each size depending on user input
    if (type == "s" || type == "S"){
        iTotalSmall += quantity;
    } else if (type == "m" || type == "M"){
        iTotalMedium += quantity;
    } else if (type == "l" || type == "L"){
        iTotalLarge += quantity;
    } else if (type == "XL" || type == "xl" || type == "Xl" || type == "xL") {
        iTotalXL += quantity; } }


//displays the current amount of surfboards purchased
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXL){
    if (iTotalSmall > 0) {
        cout << "The total number of small surfboards is " << iTotalSmall << endl;
    } if (iTotalMedium > 0) {
        cout << "The total number of medium surfboards is " << iTotalMedium << endl;
    } if (iTotalLarge > 0) {
        cout << "The total number of large surfboards is " << iTotalLarge << endl; 
    } if (iTotalXL > 0) {
        cout << "The total number of extra large(XL) surfboards is " << iTotalXL << endl;
    } else if (iTotalSmall <= 0 && iTotalMedium <= 0 && iTotalLarge <=0) {
        cout << "No purchases made yet." << endl; } }


//displays total amount due for selected surfboards
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXL){
    //const variables
    const int small_total = 175.00 * iTotalSmall;
    const int medium_total = 190.00 * iTotalMedium;
    const int large_total = 200.00 * iTotalLarge;
    const int xl_total = 220.00 * iTotalXL;
    //calculates total payment due
    int amount_due = small_total + medium_total + large_total + xl_total;
    if (iTotalSmall > 0) {
        cout << "The total number of small surfboards is " << iTotalSmall  << " at a total of $" << small_total << endl;
    } if (iTotalMedium > 0) {
        cout << "The total number of medium surfboards is " << iTotalMedium << " at a total of $" << medium_total << endl;
    } if (iTotalLarge > 0) {
        cout << "The total number of large surfboards is " << iTotalLarge << " at a total of $" << large_total << endl;
    } if (iTotalXL > 0) {
        cout << "The total number of extra large(XL) surfboards is " <<  iTotalXL << " at a total of $" << xl_total << endl; 
    } else if (iTotalSmall <= 0 && iTotalMedium <= 0 && iTotalLarge <= 0 && iTotalXL <= 0) {
        cout << "No purchases made yet." << endl; }
    //displays total payment due
    cout << "Amount due: $" << amount_due << endl; }
