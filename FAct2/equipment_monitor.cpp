#include <iostream>
using namespace std;

int main()
{
    double temp, volt;
    char comm;

    // Member 3: declare your counters (total, normal, warning, critical) and tempSum here
    // Member 5: declare your maxTemp and minTemp variables here

    cout << "SMART EQUIPMENT MONITORING SYSTEM\n\n";

    cout << "Enter temperature in Celsius (-1 to stop): ";
    cin >> temp;

    while (temp != -1)
    {
        cout << "Enter voltage: ";
        cin >> volt;
        // Member 4: add your while loop here to reject negative voltage (volt < 0)

        cout << "Is communication working? (Y/N): ";
        cin >> comm;
        // Member 4: add your while loop here to reject anything other than Y/N

        // Member 1: add your if / else if / else here (check CRITICAL first, then WARNING, then NORMAL)

        // Member 3: increment total and add temp to tempSum here (also increment normal/warning/critical inside Member 1's if blocks)
        // Member 5: update maxTemp and minTemp here

        cout << "\nEnter temperature in Celsius (-1 to stop): ";
        cin >> temp;
    }

    // Member 3: print the monitoring summary and average temperature here (only divide if total > 0!)
    // Member 5: print Highest Temperature and Lowest Temperature inside the summary here

    cout << "\nMonitoring session ended.\n";

    return 0;
}
