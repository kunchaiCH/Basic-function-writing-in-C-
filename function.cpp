#include <iostream>
using namespace std;
void sequence(){            // Sequence function
    int hrs;
    cout << "Enter total hours: ";
    cin >> hrs;
    int days = hrs / 24;
    int hours = hrs % 24;
    cout << hrs << " hours = " << days << " days " << hours << " hours " << endl;
}

main(){
    sequence();
    return 0;
}