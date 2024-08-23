#include <vector>

using namespace std;
int main() 
{
vector<int> numbers(5);
int sum = 0;

for(int i = 0; i < 5; i++)
    sum += numbers[i];
}