#ifndef _STATEMENT_NODE_H_
#define _STATEMENT_NODE_H_

#include <string>

namespace TinyCompiler{

	//����Ļ���
	class StatementNode{
	public:
		std::string name;
	public:
		virtual ~StatementNode();
	};
}

#endif