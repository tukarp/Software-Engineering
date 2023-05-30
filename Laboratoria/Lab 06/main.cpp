#include "System.h"

using namespace std;

int main() {
    // Create system
    // System parameters: name: string, technology: string, performance: string, functionality: string, security: string
    System system = System("System", "Technology", "Performance", "Functionality", "Security");

    // Boot system
    system.boot();

    return 0;
}
