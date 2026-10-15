#include <iostream>
#include <string>
using namespace std;

int main() {
    string day, business;
    double weight, shipping, packing = 0, total;
    int time;

    cout << "Enter day (Mon-Sun) : ";
    cin >> day;
    cout << "Enter parcel weight (kg): ";
    cin >> weight;
    cout << "Enter booking time (0-23): ";
    cin >> time;
    cout << "Business account? (yes/no): ";
    cin >> business;

    shipping = weight * 120;
    if (business == "yes") {
        shipping = shipping * 0.80;
    }
    
    if (day == "Sat" && time >= 12 && business == "yes") {
        packing = 0;
    } else {
        if (shipping > 1500) {
            packing = 0;
        } else {
            if (day == "Sat" || day == "Sun") {
                packing = 250;
            } else {
                packing = 150;
            }
        }
        if (packing > 0 && time < 10) {
            packing += 300;
        }
    }

    total = shipping + packing;
    
    if (day == "Sat" && time >= 12 && business == "yes") {
         total = total * 0.90;
    }

    cout << "Final Bill = " << total << " PKR" << endl;
    return 0;
}