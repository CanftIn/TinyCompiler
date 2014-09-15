#ifndef _KEYWORD_H_
#define _KEYWORD_H_

#include <set>
#include <string>

namespace TinyCompiler{

	//���붨��Ĺؼ���
	enum class KeyWord{
		BREAK,
		CASE,
		CHAR,
		CONST,
		CONTINUE,
		DEFAULT,
		DO,
		DOUBLE,
		ELSE,
		ENUM,
		FLOAT,
		FOR,
		IF,
		INT,
		LONG,
		RETURN,
		SHORT,
		SIGNED,
		STATIC,
		STRUCT,
		SWITCH,
		TYPEDEF,
		UNION,
		UNSIGNED,
		VOID,
		WHILE
	};

	typedef std::set<std::string> KeyWordDict;
	KeyWordDict keyWordDict = {
		{ "break" },
		{ "case" },
		{ "char" },
		{ "const" },
		{ "continue" },
		{ "default" },
		{ "do" },
		{ "double" },
		{ "else" },
		{ "enum" },
		{ "float" },
		{ "for" },
		{ "if" },
		{ "int" },
		{ "long" },
		{ "return" },
		{ "short" },
		{ "signed" },
		{ "static" },
		{ "struct" },
		{ "switch" },
		{ "typedef" },
		{ "union" },
		{ "unsigned" },
		{ "void" },
		{ "while" },
	};
}

#endif