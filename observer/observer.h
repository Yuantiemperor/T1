#pragma once
#include <list>
#include <vector>
using std::list;
using std::vector;
class Event {};
class Listener
{
	public:
		virtual void trigger(Event event) = 0;
};
class myObserever
{
	private:
		vector<Listener*> listeners{};

	public:
		void trigger(Event event)
		{
		int i= 0;
		for(; i < listeners.size(); i++)
		{
			listeners.at(i)->trigger(event);
		}
		}
		void addListener(Listener *l)
		{
			listeners.push_back(l);
		}
};


