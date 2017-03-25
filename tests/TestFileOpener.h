#ifndef __TEST_FILE_OPENER_H__
#define __TEST_FILE_OPENER_H__

#include "CppUnitTest.h"
#include "FileOpener.h"

using namespace std;

class TestFileOpener : public CppTest {

	test_suite(TestFileOpener);
	test(testGetOpen);
	end_test_suite();

	FileOpener *fo;
public:
	void setUp();
	void tearDown();
protected:
	void testGetOpen();
};

void TestFileOpener::testGetOpen() { 
	getAssertion(fo->getOpen(), 1);
}

void TestFileOpener::setUp() {
	fo = new FileOpener("iris.data");
}

void TestFileOpener::tearDown() {
	delete fo;
} 

#endif
