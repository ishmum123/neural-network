#ifndef __TEST_PERFORMER_H__
#define __TEST_PERFORMER_H__

#include "CppUnitTest.h"

using namespace CPPUNIT_NS;

class TestPerformer {
	TestResult tr;
	TestResultCollector trc;	
	void runTests();
public: 
	TestPerformer();
	bool getResult();
};

bool TestPerformer::getResult() { 
	return trc.wasSuccessful(); 
}

void TestPerformer::runTests() {		
	TestRunner testrunner;
	testrunner.addTest (TestFactoryRegistry::getRegistry().makeTest());
	testrunner.run(tr);
	CompilerOutputter compileroutputter(&trc, cerr);
	compileroutputter.write ();
}

TestPerformer::TestPerformer() {
	tr.addListener (&trc);
	BriefTestProgressListener progress;
	tr.addListener (&progress);
	runTests();
}

#endif
