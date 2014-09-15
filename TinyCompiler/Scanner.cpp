#include <cassert>
#include <fstream>
#include <iostream>

#include "Scanner.h"

namespace TinyCompile{
	bool Scanner::openFile(){
		assert(!(this->fileName_.empty()));

		std::ifstream in(this->fileName_);
		if (in){
			in.seekg(0, in.end);
			size_t length = in.tellg();
			in.seekg(0, in.beg);
			//std::vector<char> buffer(length);
			//����code_�Ŀռ�����ȫ����ȫ��Դ��
			this->code_.resize(length);
			in.read(&(this->code_[0]), this->code_.size());
			//this->code_ = std::move(buffer);
			//std::cout << code_ << std::endl;
			in.close();
			return true;
		}
		
		return false;
	}

	/*Token Scanner::getNextToken(){
		openFile();

		return Token();
	}*/
}