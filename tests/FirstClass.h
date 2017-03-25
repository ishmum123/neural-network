#include <string>

using namespace std;

class FirstClass {
	string msg = "Hello World!";
public: 
	string getMessage();
};

string FirstClass::getMessage() { 
	return msg; 
}
