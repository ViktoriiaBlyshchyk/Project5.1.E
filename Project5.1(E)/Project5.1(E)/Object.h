#pragma once
#include "Error.h"
#include "E.h"
#include <iostream>
#include <string> 
#include <sstream>

using namespace std;

class Object
{
	static unsigned int count;
public:
	static unsigned int Count() { return count; }
	Object() { count++; }
	~Object() { count--; }
};
