#include <iostream>
#include <iomanip>

using namespace std;
using namespace std;

int main() 
{
    int herd_size = 110;

    cout << herd_size;

    int square_side = 12;
    cout << "The square perimeter is: " << 4 * square_side;

    cout << "\n";

    int byte = 255;
    cout << "Byte in hex: " << hex << byte;

    cout << "\n";

    int byten = 255;
	cout << setbase(16) << byten;
}