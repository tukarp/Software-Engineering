#include <iostream>

#include "BernouliDiagram.h"

using namespace std;

int main() {
    // Bernouli diagram
    BernouliDiagram * bernouliDiagram = new BernouliDiagram();

    while (true) {
        double p;
        int n;
        int k;

        cout << "---------------------------------------------------------------------------------------\n";
        cout << "-----------------------------Calculating Bernouli Diagram------------------------------\n";
        cout << "---------------------------------------------------------------------------------------\n";

        cout << "Enter probability of success in a single experiment [p]: ";
        cin >> p;

        cout << "Enter number of experiments in the Bernoulli diagram [n]: ";
        cin >> n;

        cout << "Enter number of experiments ending with success in the Bernoulli diagram [k]: ";
        cin >> k;

        cout << "Probability of " << k << " successes in " << n << " experiments with probability of success in a single experiment equal to " << p << " is equal to " << bernouliDiagram->bernouliDiagram(p, n, k) << endl;

        string userInput;
        cout << "Do you want to continue? (y/n): ";
        cin >> userInput;

        while (true) {
            if (userInput == "y") {
                break;
            } else if (userInput == "n") {
                delete bernouliDiagram;
                return 0;
            } else {
                cout << "Wrong input" << endl;
            }
            cin >> userInput;
        }
    }

    return 0;
}
