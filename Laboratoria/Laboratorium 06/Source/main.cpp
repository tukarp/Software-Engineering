#include "System.h"

using namespace std;

int main() {
    // System
    string systemName = "System";
    string systemTechnology = "Technology";
    string systemPerformance = "Performance";
    string systemFunctionality = "Functionality";
    System system = System("System", "Technology", "Performance", "Functionality", "Security");
    system.boot();

    return 0;
}
