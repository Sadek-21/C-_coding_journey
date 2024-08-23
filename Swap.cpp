#include <vector>
#include <iostream>

using namespace std;
int main() 
{

vector<int> numbers(5);
int auxiliary;

for(int i = 0; i < 2; i++) {
   auxiliary = numbers[i];
   numbers[i] = numbers[4 - i];
   numbers[4 - i] = auxiliary;
}
}

