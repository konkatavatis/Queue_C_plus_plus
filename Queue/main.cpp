#include "Queue.h"

int main()
{
	Queue q1; //��������� ��� ���� (�������� � constructor)
	size_t number_of_enqueued_elements, number_of_dequeued_elements;
	char random_queue_element;	
	
	//������ (enqueue) ����� ���� ���� ����.
	cout<<"How many random elements do you want to ENQUEUE inside the queue? (Type a positive integer and press ENTER): "<<endl;
	cin>>number_of_enqueued_elements;
	
	cout<<endl<<endl;
	
	srand(time(NULL));//������������ ��� ��������� ������� ������� ����������� ��� ��������������� 
	                  //(���� �� C/C++ ����� ����������, ������ ������� ������� �� ���� ��������)
	for(size_t i=0; i<number_of_enqueued_elements; i++)
	{
		random_queue_element = 33 + rand()%(127-33);  //�� ����������� ��������� ASCII ���������� ����� ��� �� 33 �� �� 127 ��� ������ ASCII
		q1.enqueue(random_queue_element);
	}
	
	//����� (dequeue) ����� ��� ��� ����.
	//s1.print();   //� ������ ���� ���������� ��� ��������� (������) ���� ��������, ��� ���������� ���� ���� ����.
				    //����, �� ������ � print(), �� �� ����� �� ��������� ��� �������� ��� ����� ����.
					//����� �����������, ������� �� ������ �� �������� �� ������ ��� ��������� ��� �� ������ dequeue.
	cout<<"\n\nHow many random elements do you want to DEQUEUE outside of the queue (F.I.F.O. mode of dequeueing)?"<<endl;
	cout<< "(Type a positive integer and press ENTER): "<<endl;
	cin>>number_of_dequeued_elements;
	
	cout << "----------------------------------------" << endl;
	for(size_t i=0; i<number_of_dequeued_elements; i++)
		cout<<q1.dequeue()<<( q1.getDequeueValue() < q1.getEnqueueValue()-1 ? "'\n" : "\n");
	
	system("PAUSE > nul");
	return 0;
}
