#include "Queue.h"

Queue::Queue() //Αρχικοποίησε την ουρά με 0 και -1 σε κάθε βοηθητική μεταβλητή αντίστοιχα
{
	setEnqueueValue(0);
	setDequeueValue(-1);
}

void Queue::setQueue(char temp)
{
	queue[getEnqueueValue()] = temp;
}

char Queue::getQueue() const
{
	return queue[getDequeueValue()];
}

void Queue::setEnqueueValue(int enqueue_value)
{
	this->enqueue_value = enqueue_value;
}

void Queue::setDequeueValue(int dequeue_value)
{
	this->dequeue_value = dequeue_value;
}

int Queue::getEnqueueValue() const
{
	return enqueue_value;
}

int Queue::getDequeueValue() const
{
	return dequeue_value;
}

void Queue::print()
{
	for(size_t i=0; i<strlen(queue); i++)
		cout<<"'"<<dequeue()<<"'"<<endl;
}

void Queue::enqueue(char c)//Αν η ουρά είναι γεμάτη, εκτύπωσε κατάλληλο μήνυμα λάθους
{
	if(getEnqueueValue() == SIZE)
		cerr<<"Cannot enqueue '" << c <<"'! Queue is FULL!\n\a";
	
	else//αλλιώς, κάνε εισαγωγή το στοιχείο μέσα στην ουρά και αύξησε το μετρητή της επόμενης εισαγωγής κατά 1.
	{
		cout<<"'" << c <<"' was enqueued!\n";
		setQueue(c);
		setEnqueueValue(getEnqueueValue()+1);
	}
}

char Queue::dequeue()//Αν η ουρά είναι άδεια, εκτύπωσε κατάλληλο μήνυμα λάθους
{
	if(getDequeueValue() >= getEnqueueValue()-1)
	{
		cerr<<"Cannot dequeue anything! Queue is EMPTY!\a";
		return '\0';
	}
	else//αλλιώς, αύξησε το μετρητή της επόμενης εισαγωγής κατά 1 και κάνε εξαγωγή το στοιχείο μέσα από την ουρά.
	{
		setDequeueValue(getDequeueValue()+1);
		cout<<"'"<<getQueue() <<"' was dequeued!   --->   '";
		
		return getQueue();
	}
}
