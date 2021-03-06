// Vector2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
using namespace std;

class Drawable
{
public:
	virtual void Draw() = 0;
	virtual ~Drawable() { cout << "Drawable destructor called\n"; }
};

class Sphere: public Drawable
{
public:
	void Draw() { cout << "o"; }
	~Sphere() { cout << "Sphere destructor called\n"; }
};

class Box : public Drawable
{
public:
	void Draw() { cout << "[]"; }
	~Box() { cout << "Box destructor called\n"; }
};

int main()
{
	vector<Drawable*> vec;
	vec.push_back(new Sphere());
	vec.push_back(new Box());

	cout << "--- Drawing objects ----\n";
	for (Drawable* object : vec)
		object->Draw();
	cout << "\n\n";

	cout << "--- Deleting objects ----\n";
	for (Drawable* object : vec)
		delete object;
	
    return 0;
}

