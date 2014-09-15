#ifndef _SCANNER_H_
#define _SCANNER_H_

#include <vector>
#include <string>

#include "Token.h"

namespace TinyCompiler{

	class Scanner{
	private:
		enum class ScanPhrase{
			BEGIN,			//��ʼ
			IN_KEYWORD,		//����ؼ���
			IN_STRING,		//�����ַ���
			IN_INTEGER,		//��������
			IN_REAL,		//��������
			IN_DELIMITER,	//����ָ���
			IN_VARIALBE,	//�������
			END				//����
		};
	private:
		//�ִʵĽ׶�
		ScanPhrase phrase_;
		//��Ҫ�ִʵ�Դ���ļ�
		std::string fileName_;
		//����Դ��
		std::string code_;
		//��¼��ǰ��������Դ���λ��
		std::string::const_iterator citer;
		//��¼���������ļ��е�����
		size_t location;
	private:
		//���ļ������ļ���ȫ��Դ�뻺����code_��
		bool openFile();
		//���Scanner���ڲ�״̬
		//ÿ�δ�����һ���ļ���ȫ�����غ����
		void clear();
		//����ÿһ�е�ǰ���հ�
		void skipBlank(std::string::const_iterator& cit, size_t& location);

		//����ʼ�����
		void handleBegin(std::string& tokenName, TokenAttr& tokenAttr);
		//����ؼ���
		void handleKeyWord(std::string& tokenName, TokenAttr& tokenAttr);
		//����ָ���
		void handleDelimiter(std::string& tokenName, TokenAttr& tokenAttr);
		//��������
		void handleInteger(std::string& tokenName, TokenAttr& tokenAttr);
		//��������
		void handleReal(std::string& tokenName, TokenAttr& tokenAttr);
		//�����ַ���
		void handleString(std::string& tokenName, TokenAttr& tokenAttr);
		//�������
		void handleVariable(std::string& tokenName, TokenAttr& tokenAttr);
		//������������
		Token handleEnd(std::string& name,
						const TokenAttr tokenAttr,
						const size_t location);
	protected:
		void setPhrase(const ScanPhrase phrase);
		ScanPhrase getPhrase() const;
		void setFileName(const std::string& fileName);
		std::string getFileName() const;
	public:
		explicit Scanner(const std::string& fileName) 
			:fileName_(fileName), phrase_(ScanPhrase::BEGIN), location(1){}

		//һ���Խ�ȫ���Ĵ��طֳ���
		std::vector<Token> getTokens();
		//������һ��һ���ķֳ���
		Token getNextToken();
	};
}

#endif