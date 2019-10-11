# Ahmed
#include <iostream>

#include <limits>

using namespace std;

void triangle(int hWidth, int bHeight, int bWidth)

{

for (int i = 0; i < hWidth; i += 2)

{

int j = 0;

// space

for (j = 0; j < hWidth - i - 1; j++)

cout << " ";

for (int k = 0; k <= i; k++)

{

cout << "* ";

j++;

}

cout << endl;

}

int spaceCount = ((2 * hWidth) - (bWidth * 2)) / 2;

for (int i = 0; i < bHeight; i++)

{

for (int j = 0; j < spaceCount; j++)

{

cout << " ";

}

for (int j = 0; j < bWidth; j++)

{

cout << "* ";

}

cout << endl;

}

}

int main()

{

int num;

int bHeight, bWidth, hWidth;

cout << "Enter trunk height : ";

cin >> bHeight;

cout << "Enter trunk width : ";

while (!(cin >> bWidth) || bWidth % 2 == 0)

{

// flush the cin data

cin.clear();

cin.ignore(numeric_limits<streamsize>::max(), '\n');

cout << "Please enter odd number for the width : ";

}

cout << "Enter leaves width : ";

cin >> hWidth;

cout << "Triangle:" << endl;

triangle(hWidth, bHeight, bWidth);

return 0;
