#include <cxxtest/TestSuite.h>
#include "observer.h"
class ListenerMock : public Listener
{
		private:
			bool triggered = false;	
		public:
			void trigger(Event event)
			{
					triggered true;
			}
			bool is_triggered()
			{
				return triggered;
			}
};
class Observer_TestSuit: public CxxTest::TestSuite
{
	
	public:
		void testTriggerEvent()
		{
			ListenerMock lm();
			MyObserver observer();
			observer.add Listener(lm);
			observer.trigger(new Event());
			TS_ASSERT(lm.is_triggered());
		}
	
};
