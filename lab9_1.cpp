#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double loan, rate, pay_per_year;

    cout << "Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year (%): ";
    cin >> rate;
    cout << "Enter amount you can pay per year: ";
    cin >> pay_per_year;

    cout << setw(13) << left << "EndOfYear#";
    cout << setw(13) << left << "PrevBalance";
    cout << setw(13) << left << "Interest";
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";

    double prevBalance = loan;
    int year = 1;

    cout << fixed << setprecision(2);

    while (prevBalance > 0) {
        double interest = prevBalance * (rate / 100.0);
        double total = prevBalance + interest;
        double payment = (total < pay_per_year) ? total : pay_per_year;
        double newBalance = total - payment;

        cout << setw(13) << left << year;
        cout << setw(13) << left << prevBalance;
        cout << setw(13) << left << interest;
        cout << setw(13) << left << total;
        cout << setw(13) << left << payment;
        cout << setw(13) << left << newBalance;
        cout << "\n";

        prevBalance = newBalance;
        year++;
    }

    return 0;
}