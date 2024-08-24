#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	int elements = 10;
	vector<int> vect(elements);
	int current_size = vect.size();
	
	cout << current_size << endl;

    int current_siz = sizeof(vect[0]);
    cout << current_siz << endl;
}