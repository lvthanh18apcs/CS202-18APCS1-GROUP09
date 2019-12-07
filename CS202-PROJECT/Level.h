#ifndef _LEVEL_H
#define _LEVEL_H

#include "Settings.h"
#include "Objects.h"
#include "Dolphin.h"
#include "Pig.h"
#include "Whale.h"
#include "Boss.h"

using namespace std;

class LEVEL {
private:
	int current;
	bool ok;
	time_t now;
	vector <OBJECT*> arr;
	bool stop, tmp_stop;
	int delay;
	void verticalLine(int col);
public:
	~LEVEL();
	LEVEL(int choice, int delay);
	int getLevel();
	void set_level();
	void boss_split();
	void split();
	bool oktowrite();
	void kill();
	void run();
	void passCoor(pair<int,int> coor);
	void pause();
	void resume();
};


#endif
