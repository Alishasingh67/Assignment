#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    
	int num, greater_than_50 = 0, less_than_50 = 0, equal_to_50 = 0;
    double greater_sum = 0, less_sum = 0, avg_greater, avg_less;

    for (int i = 0; i < 10; i++) {
        cout << "Enter a number: ";
        cin >> num;
        if (num > 50) {
            greater_than_50++;
            greater_sum += num;
        } else if (num < 50) {
            less_than_50++;
            less_sum += num;
        } else {
            equal_to_50++;
        }
    }

    avg_greater = greater_sum / greater_than_50;
    avg_less = less_sum / less_than_50;

    cout << "Greater than 50: " << greater_than_50 << endl;
    cout << "Less than 50: " << less_than_50 << endl;
    cout << "Equal to 50: " << equal_to_50 << endl;
    cout << "Average of numbers greater than 50: " << avg_greater << endl;
    cout << "Average of numbers less than 50: " << avg_less << endl;

    return 0;
}




