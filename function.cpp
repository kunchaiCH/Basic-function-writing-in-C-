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

void repettition(){             // Repettition function
    for(int k=1; k<=10; k++){
        cout << k << " kg. =" << k * 2.2046 << " lbs." << endl;
    }
}

main(){
    //sequence();
    repettition();
    return 0;
}