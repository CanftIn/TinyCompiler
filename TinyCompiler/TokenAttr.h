#ifndef _TOKEN_ATTR_H_
#define _TOKEN_ATTR_H_

#include <map> 
#include <memory>
#include <string>
#include <utility>

namespace TinyCompiler{
	//��������
	enum class TokenAttr{
		KEYWORD,	//�ؼ���
		STRING,		//�ַ���
		INTEGER,	//����
		REAL,		//������
		DELIMITER,	//�ָ���
		VARIABLE,	//����

		UNKNOWN		//δ֪
	};

	class TokenAttrDictInstance{
	private:
		typedef std::map<TokenAttr, std::string> TokenAttrDict;

		static std::shared_ptr<TokenAttrDict> pInstance;
	public:
		static std::shared_ptr<TokenAttrDict> getInstance();
	};
}

#endif