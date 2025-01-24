#pragma once
#include <string>

namespace CL
{
	struct Trans
	{
		float x = 0, y = 0;
	};
	struct GameObject
	{
		std::string name = "NewObj";
		int ID = -1;
		Trans Position = { 0,  0};
		Trans Scale = { 0,  0};
		Trans Rotation = { 0,  0};
	};
}