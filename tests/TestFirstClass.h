#ifndef __TEST_FIRST_CLASS_H__
#define __TEST_FIRST_CLASS_H__

#include <string>
#include "CppUnitTest.h"
#include "FirstClass.h"

using namespace std;

class TestFirstClass : public CppTest {

	test_suite(TestFirstClass);
	test(testGetMessage);
	end_test_suite();

	FirstClass *fc;
public:
	void setUp();
	void tearDown();
protected:
	void testGetMessage();
};

void TestFirstClass::testGetMessage() { 
	string s("Hello World!");
	getAssertion(fc->getMessage(), s);
}

void TestFirstClass::setUp() {
	fc = new FirstClass();
}

void TestFirstClass::tearDown() {
	delete fc;
} 

#endif
