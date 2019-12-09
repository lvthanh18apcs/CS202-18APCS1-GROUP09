#ifndef _SETTINGS_H
#define _SETTINGS_H
#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include <thread>
#include <fstream>
#include <mutex>
#include<iomanip>

using namespace std;

const string path = "D:\\cs202-project\\cs202-project\\cs202-project\\MAP\\";
const string savedPath = "D:\\cs202-project\\cs202-project\\cs202-project\\Saved\\";
 // t.length()=140
const string split_lane = "--------------------------------------------------------------------------------------------------------------------------------------------------------------";
const int BORDER = 160;
const int LBORDER = 0;

const int X_MOVE = 1;
const int Y_MOVE = 5;
const int Top_bound = 0;
const int Bot_bound = 45;
const int Left_bound = 1; 
const int Right_bound = BORDER - 3;

void FixConsoleWindow();
void go(int column, int line);
void color(const int& k);
void Nocursortype();				// hide the cursor
void setcursor(bool x, DWORD size);


#endif 
