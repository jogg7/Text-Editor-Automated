#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Coordinates.h"
#include "MyRectangle.h"
#include <Windows.h>
using namespace std;

class TextArt : public Coordinates
{
public:
	int foreColor, backColor;
	int highlight_forecolor, highlight_backcolor;
	int maximumSizeOfInput;
	int xpos, ypos;
	int currRow;
	vector <string> data;
	TextArt(string filename, int x, int y, int fore, int back, int highlighted_fore, int highlighted_back);
	void Display(bool selectFirstEntry = true);
	void ColorRow(int entry);
	void ColorNext();
	void ColorPrevious();
	int Getsize() { return data.size(); }
	string GetEntry() { return data[currRow]; }
};