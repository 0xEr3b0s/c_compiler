#pragma once

#include <exception>
#include <vector>
#include <string>

/* SECTION Lexer Part */
struct Token {
	std::string value;
	std::string type;
};

std::vector<Token> tokenizer(const std::string &code);

class CustomException {
	public:
		class UnmatchedRegexPatternException : public std::exception {
			const char *what() const noexcept {
				return ("Error: the word didn't match any regex pattern");
			}
		};
};


/* !SECTION */