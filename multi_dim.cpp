#include <vector>
#include <iostream>

using namespace std;
int main() 
{


vector<vector<float>> temp(31, vector<float>(24));
float sum = 0.0;

for (int day = 0; day < 31; day++)
  sum += temp[day][11];

float average = sum / 31;
cout << "Average temperature at noon: " << average << endl;

//Now let's find the highest temperature for the whole month – see the code in the editor.


float max = -100.0;

for (int day = 0; day < 31; day++)
  for (int hour = 0; hour < 24; hour++)
    if (temp[day][hour] > max)
      max = temp[day][hour];

cout << "The highest temperature was " << max << endl;

// We want to count the days when the temperature at noon was at least 20oC

int hotdays = 0;

for (int day = 0; day < 31; day++)
  if (temp[day][11] >= 20.0)
    hotdays++;

cout << hotdays << " days were hot.";


// here We’re going to fill the entire array with zeros in order to prepare it for use in the coming month.

vector<vector<float>> temp(31, vector<float>(24));

for (int d = 0; d < 31; d++)
  for (int h = 0; h < 24; h++)
    temp[d][h] = 0.0;
}