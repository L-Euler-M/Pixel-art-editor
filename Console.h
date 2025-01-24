#pragma once
#include <vector>
#include <string>
namespace CL
{
	enum MessageType
	{
		ERROR,
		INFO,
		WARNING,
		SUCCESS
	};
	struct Message
	{
		std::string msg = "Auto Message";
		MessageType type;
	};

	struct Console
	{
		std::vector<Message> messages;
		void AddToConsole(Message& mg);

		void AddErrorMessage(const std::string& msg);
		void AddWarningMessage(const std::string& msg);
		void AddSuccessMessage(const std::string& msg);
		void AddInfoMessage(const std::string& msg);

	};
}