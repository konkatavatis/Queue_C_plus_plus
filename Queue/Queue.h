#ifndef QUEUE_H  //�� ������� #ifndef, #define ��� #endif ����������� �����������.  
	#define QUEUE_H  //��� ����� �����������, ���� ������ �� ���������� ������������ (��� �� 2� ����������� ��� ����) ��� �������.
	
	#include <iostream> //��� �� cout/cin
	#include <cstring>  //��� �� ������������ � strlen() ��� ����� �� ������ ��� ��������� ���� ��������������
	#include <cstdlib>  //��� �� ����� ��� ������� system()
	#include <ctime>  //��� �� ����� ��� time() ���� ���� srand()
	using namespace std;
	
	#define SIZE 10 //�� ������� ������� ��� �����
	
	class Queue
	{
		private:
			char queue[SIZE]; //� ���� ��� ����� ������������ �� ������������ ������ ����������
			int enqueue_value, dequeue_value; //���������� ��� ������������ ���� ���� ��� ��� ����� ��� �����
			
		public:
			Queue(); //constructor �������
			
			//setters
			void setQueue(char);  //�������� ���� ��������� ���� ����
			void setEnqueueValue(int);  //��������� ��������� ��� �������� ���� ��������� ���� ���� (��� �����)
			void setDequeueValue(int);  //��������� ��������� ��� ������� ���� ��������� ���� ���� (��� ��� ����)
			//getters
			char getQueue() const; //��������� �� ��������� �������� ��� �����
			int getEnqueueValue() const; //��������� �� �������� ��� ��������� ���� ����
			int getDequeueValue() const; //��������� �� �������� ��� �������� ��� ��� ����
			
			void print();  //H print ��� ����������� �� ������ �� const ���� ��� ����� ���� ���� ������ ��� ��� dequeue
			void enqueue(char);  //�������� ���� ���� ���� - ������� ��� ����, ��� ��� ������ �� ������ const
			char dequeue();    //������� ��� ���� ���� - ������� ��� ����, ��� ��� ������ �� ������ const
	};
#endif
