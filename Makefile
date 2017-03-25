all: TestRunner.cpp
	g++ -std=c++11 TestRunner.cpp -l cppunit -o RunTests

clean:
	rm RunTests
