#pragma once

#include <vector>
#include <string>

/* SECTION Lexer Part */
struct Token {
	std::string value;
	std::string type;
};

std::vector<Token> tokenizer(const std::string &code);

/* !SECTION */