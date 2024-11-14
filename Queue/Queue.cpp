#include "Queue.h"

Queue::Queue() //������������ ��� ���� �� 0 ��� -1 �� ���� ��������� ��������� ����������
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

void Queue::enqueue(char c)//�� � ���� ����� ������, �������� ��������� ������ ������
{
	if(getEnqueueValue() == SIZE)
		cerr<<"Cannot enqueue '" << c <<"'! Queue is FULL!\n\a";
	
	else//������, ���� �������� �� �������� ���� ���� ���� ��� ������ �� ������� ��� �������� ��������� ���� 1.
	{
		cout<<"'" << c <<"' was enqueued!\n";
		setQueue(c);
		setEnqueueValue(getEnqueueValue()+1);
	}
}

char Queue::dequeue()//�� � ���� ����� �����, �������� ��������� ������ ������
{
	if(getDequeueValue() >= getEnqueueValue()-1)
	{
		cerr<<"Cannot dequeue anything! Queue is EMPTY!\a";
		return '\0';
	}
	else//������, ������ �� ������� ��� �������� ��������� ���� 1 ��� ���� ������� �� �������� ���� ��� ��� ����.
	{
		setDequeueValue(getDequeueValue()+1);
		cout<<"'"<<getQueue() <<"' was dequeued!   --->   '";
		
		return getQueue();
	}
}
