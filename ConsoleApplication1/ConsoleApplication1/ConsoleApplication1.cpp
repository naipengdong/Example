// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

class Square
{
private: 
	int edge_length;
	int area;
public:
	void set_length(int x)
	{
		edge_length = x;
	}
	int calculate_area()
	{
		area = edge_length * edge_length;
		return area;
	}
};
class Triangle
{
private:
	int bottom_length;
	int height;
	int area;
public:
	void set_length(int x, int y)
	{
		bottom_length = x;
		height = y;
	}
	int calculate_area()
	{
		area = 0.5 * bottom_length * height;
		return area;
	}
};
int main()
{
	Square blue_large;
	blue_large.set_length(4);
	int bl_area = blue_large.calculate_area();

	Square red_small;
	red_small.set_length(2);
	int rs_area = red_small.calculate_area();

	Triangle yellow_large;
	yellow_large.set_length(4, 4);
	int yl_area = yellow_large.calculate_area();

	Triangle green_small;
	green_small.set_length(2, 2);
	int gs_area = green_small.calculate_area();

    std::cout << "The area for the blue large square is \n" << bl_area << "\n"; 
	std::cout << "The area for the red samll square is \n" << rs_area << "\n";
	std::cout << "The area for the yellow large triangle is \n" << yl_area << "\n";
	std::cout << "The area for the green samll triangle is \n" << gs_area << "\n";
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
