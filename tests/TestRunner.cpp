#include "TestFirstClass.h"
#include "TestFileOpener.h"

//Include this only(!) after including the test files
#include "TestPerformer.h"

register_test(TestFirstClass);
register_test(TestFileOpener);

int main(int argc, char* argv[]) {
	TestPerformer tp;
	return !tp.getResult();
}
