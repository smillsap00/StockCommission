// ============================================================================
// File Name: StockCommission.cpp
// Description: Calculates and displays the costs and commissions for a stock
//              purchase using formatted currency layouts.
// ============================================================================

#include <iostream>
#include <iomanip> // Step 1: Necessary for fixed, setprecision, and showpoint

using namespace std;

int main() {
    // Step 2: Variable Declaration & Initialization Section
    // (Adjust these initial values if your specific assignment prompt requires different numbers)
    double stockAloneCost = 35000.00;     // Flat cost of the shares alone
    double commissionPercent = 2.0;       // Broker commission rate (2%)
    
    double commissionAmount;               // To hold the calculated dollar fee
    double totalAmountPaid;                // To hold the combined total cost

    // Step 3: Calculation Section
    // Convert the percentage to a decimal fraction to calculate the exact dollar amount
    commissionAmount = stockAloneCost * (commissionPercent / 100.0);
    totalAmountPaid = stockAloneCost + commissionAmount;

    // Step 4: Output Formatting & Display Section
    // Force the terminal stream to print exactly 2 decimal places with a decimal point
    cout << fixed << setprecision(2) << showpoint;

    // Print out the structural breakdown with dollar signs and trailing line breaks
    cout << "The amount paid for the stock alone (without the commission): $" << stockAloneCost << endl;
    cout << "The amount of the commission: $" << commissionAmount << endl;
    cout << "The total amount paid (for the stock plus the commission): $" << totalAmountPaid << endl;

    return 0; // Step 5: Gracefully close out the program execution block
}