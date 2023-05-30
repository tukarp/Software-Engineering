#include <iostream>
#include "BernouliDiagram.h"

using namespace std;

int main() {
    // Create BernouliDiagram
    BernouliDiagram * bernouliDiagram = new BernouliDiagram();

    // Infinite loop
    while(true) {
        // Probability of success in a single experiment
        double p;
        // Number of experiments in the Bernoulli diagram
        int n;
        // Number of experiments ending with success in the Bernoulli diagram
        int k;

        // Get user input
        cout << "Enter probability of success in a single experiment [p]: ";
        cin >> p;

        cout << "Enter number of experiments in the Bernoulli diagram [n]: ";
        cin >> n;

        cout << "Enter number of experiments ending with success in the Bernoulli diagram [k]: ";
        cin >> k;

        // Calculate probability with BernouliDiagram
        cout << "---------------------------------------------------------------------------------------\n";
        cout << "-----------------------------Calculating Bernouli Diagram------------------------------\n";
        cout << "---------------------------------------------------------------------------------------\n";
        cout << "Probability of " << k << " successes in " << n << " experiments with probability of success in a single experiment equal to " << p << " is equal to " << bernouliDiagram->bernouliDiagram(p, n, k) << endl;



        // Get user input
        string userInput;
        cout << "Do you want to continue? (y/n): ";
        cin >> userInput;

        // Check if user wants to continue
        while(true) {
            if(userInput == "y") {
                break;
            } else if(userInput == "n") {
                delete bernouliDiagram;
                return 0;
            } else {
                cout << "Wrong input" << endl;
            }
        }
    }

    return 0;
}
