#pragma once

#include <exception>
#include <string>
#include <vector>

#pragma region Exception
class CustomException : public std::exception {
	protected:
		std::string _message;

	public:
		CustomException(const std::string &msg) : _message("Error: " + msg) {}

		const char *what() const noexcept override { return _message.c_str(); }
};

class NoneAlphaCharacterException : public CustomException {
	public:
		NoneAlphaCharacterException()
			: CustomException("First character is not alpha") {}
};

class UnrecognizedCharacterException : public CustomException {
	public:
		UnrecognizedCharacterException()
			: CustomException("Unrecognized character") {}
};
#pragma endregion

#pragma region Lexer
struct Token {
		std::string value;
		std::string type;
};

std::vector<Token> tokenizer(const std::string &code);
#pragma endregion

#pragma region Parser
struct AST {};

void Parser(void);
#pragma endregion