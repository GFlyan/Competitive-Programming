#include <fstream>

using namespace std;

int main() {
    ifstream of("input.txt");
    ofstream cf("output.txt");
    string door;
    int rail;
    of >> door >> rail;
    if (door == "front" && rail == 1 || door == "back" && rail == 2) {
        cf << "L" << "\n";
    } else {
        cf << "R" << "\n";
    }

    /*
     Front = 1
     Back = 0

     R1 = 0
     R2 = 1

    res = ( elev + rail ) % 2

    if(res == 1) - L
    else R

     L = 1
     R = 0



     */
}
