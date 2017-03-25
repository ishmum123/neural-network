#ifndef __FILE_OPENER_H__
#define __FILE_OPENER_H__

#include <string>
#include <fstream>

using namespace std;

class FileOpener {
	ifstream file;
public:
	FileOpener(string fileName);
	~FileOpener();
	bool getOpen();
};

FileOpener::FileOpener(string fileName) {
	file.open(fileName);
}

bool FileOpener::getOpen() {
	return file.is_open();
}

FileOpener::~FileOpener() {
	file.close();
}

#endif
