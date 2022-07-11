#pragma once
#include<string>
using namespace std;

class APriorityQueue
{
	public:
	class Entry{
		public:
		
		int key();
		string value();
		
		private:
		int k;
		string v;
	};
	APriorityQueue();
	~APriorityQueue();
	Entry& insert(int k, string v);
	Entry& removeMin();
	Entry& min();
	void remove(Entry& e);
	void replace(Entry& e, int k, string v);
	int size();
	bool empty();
	
	private:
};


