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

        // Calculate probability with BernouliDiagram
        cout << "---------------------------------------------------------------------------------------\n";
        cout << "-----------------------------Calculating Bernouli Diagram------------------------------\n";
        cout << "---------------------------------------------------------------------------------------\n";

        // Get user input
        cout << "Enter probability of success in a single experiment [p]: ";
        cin >> p;

        cout << "Enter number of experiments in the Bernoulli diagram [n]: ";
        cin >> n;

        cout << "Enter number of experiments ending with success in the Bernoulli diagram [k]: ";
        cin >> k;

        // Get user input
        string userInput;
        cout << "Do you want to calculate Bernouli Diagram recursively or iteratively? (r/i): ";
        cin >> userInput;

        // Print result
        if(userInput == "r") {
            cout << "Probability of " << k << " successes in " << n << " experiments with probability of success in a single experiment equal to " << p << " is equal to " << bernouliDiagram->bernouliDiagramRecursively(p, n, k) << endl;
        } else if(userInput == "i") {
            cout << "Probability of " << k << " successes in " << n << " experiments with probability of success in a single experiment equal to " << p << " is equal to " << bernouliDiagram->bernouliDiagramIteratively(p, n, k) << endl;
        } else {
            cout << "Wrong input" << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> userInput;
        // Check if user wants to continue
        while(true) {
            // Check if user wants to continue
            if(userInput == "y") {
                break;
            } else if(userInput == "n") {
                delete bernouliDiagram;
                return 0;
            } else {
                cout << "Wrong input" << endl;
            }
            // Get user input
            cin >> userInput;
        }
    }

    return 0;
}
