#include "Console.h"

void CL::Console::AddToConsole(Message& mg)
{
	messages.push_back(mg);
}

void CL::Console::AddErrorMessage(const std::string& msg)
{
	Message message;
	message.type = ERROR;
	message.msg = "[Error] " + msg;
	AddToConsole(message);
}

void CL::Console::AddWarningMessage(const std::string& msg)
{
	Message message;
	message.type = WARNING;
	message.msg = "[Warning] " + msg;
	AddToConsole(message);
}

void CL::Console::AddSuccessMessage(const std::string& msg)
{
	Message message;
	message.type = SUCCESS;
	message.msg = "[Success] " + msg;
	AddToConsole(message);
}

void CL::Console::AddInfoMessage(const std::string& msg)
{
	Message message;
	message.type = INFO;
	message.msg = "[Info] " + msg;
	AddToConsole(message);
}