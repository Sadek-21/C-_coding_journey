//It's a huge hotel consisting of three buildings, 15 floors each. There are 20 rooms
//3 towers, 15 floors, 20 rooms.



#include <iostream>
#include <vector>

using namespace std;

int main() 
{
//The first index (0 through 2) selects one of the buildings; the second (0 through 14) selects the floor, the third (0 through 19) selects the room number.
vector<vector<vector<int>>> guests(3, vector<vector<int>>(15, vector<int>(20))); // ====>int guests[3][15][20];


//let's check if there are any vacancies on the fifteenth floor of the third building:
int room;
int vacancy = 0;
for (room = 0; room < 20; room++)
  if (guests[2][14][room] == 0)
    vacancy++;

    
}