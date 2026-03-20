#pragma once

#include <exception>
#include <string>
#include <vector>

/* SECTION Lexer Part */
struct Token {
		std::string value;
		std::string type;
};

std::vector<Token> tokenizer(const std::string &code);

class CustomException {
	public:
		class NoneAlphaCharacterException : public std::exception {
				const char *what() const noexcept {
					return "Error: First character is not alpha";
				}
		};

		class UnrecognizedCharacterException : public std::exception {
				const char *what() const noexcept {
					return "Error: Unrecognized character";
				}
		};
};

/* !SECTION */