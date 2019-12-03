#ifndef _BOSS_H
#define _BOSS_H

#include "thanh.h"

using namespace std;

class BOSS :public OBJECT {
private:
	int c; //color of boss
public:
	BOSS(int y, int n, int d, int closeness, bool traffic); //line, spawn rate, closeness, traffic
	//~RDOLPHIN();
	void draw(int x, int y);
	void erase(int x, int y);
	void traffic_light(); //change boss color :)
	void first_spawn(); //at middle screen
	void set_traffic(bool s); //none
	void makeSound();
	void display();
	void spawn_rate(int n, int d) {}; //none
	bool spawn(); //where to spawn
	void close(int closeness) {}; //none
	//void get_map(bool**& map, int& x, int& y);
	void switch_light() {}; // none
	bool done(int second) { return true; } //none

	bool isImpact(int px, int py, bool** pMap);
};


#endif