/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_Observer_TestSuit_init = false;
#include "/home/gonz/Documents/cxx/observer/observer_Test_Suite.h"

static Observer_TestSuit suite_Observer_TestSuit;

static CxxTest::List Tests_Observer_TestSuit = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Observer_TestSuit( "observer_Test_Suite.h", 17, "Observer_TestSuit", suite_Observer_TestSuit, Tests_Observer_TestSuit );

static class TestDescription_suite_Observer_TestSuit_testTriggerEvent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Observer_TestSuit_testTriggerEvent() : CxxTest::RealTestDescription( Tests_Observer_TestSuit, suiteDescription_Observer_TestSuit, 21, "testTriggerEvent" ) {}
 void runTest() { suite_Observer_TestSuit.testTriggerEvent(); }
} testDescription_suite_Observer_TestSuit_testTriggerEvent;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
