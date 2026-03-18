#pragma once

#include <vector>
#include <string>
#include <regex.h>

// Basic lexer
struct Token {
	std::string value;
	std::string type;
};

std::vector<Token> tokenizer(const std::string &code);
