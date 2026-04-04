#pragma once

#include <string>

#pragma region Exception

class CustomException : public std::exception {
	protected:
		std::string _message;

	public:
		CustomException(const std::string &msg) : _message("Error: " + msg) {}

		const char *what() const noexcept override { return _message.c_str(); }
};

#pragma endregion

#pragma region UtilFunctions

#pragma endregion