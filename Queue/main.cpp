#include "Queue.h"

int main()
{
	Queue q1; //Δημιουργώ μία ουρά (καλείται ο constructor)
	size_t number_of_enqueued_elements, number_of_dequeued_elements;
	char random_queue_element;	
	
	//Εισάγω (enqueue) τιμές μέσα στην ουρά.
	cout<<"How many random elements do you want to ENQUEUE inside the queue? (Type a positive integer and press ENTER): "<<endl;
	cin>>number_of_enqueued_elements;
	
	cout<<endl<<endl;
	
	srand(time(NULL));//αρχικοποίηση της παραγωγής τυχαίων αριθμών ακυρώνοντας την ψευδοτυχαιότητα 
	                  //(μόνο σε C/C++ είναι απαραίτητο, αλλιώς παράγει συνεχώς τα ίδια στοιχεία)
	for(size_t i=0; i<number_of_enqueued_elements; i++)
	{
		random_queue_element = 33 + rand()%(127-33);  //Οι εκτυπώσιμοι λατινικοί ASCII χαρακτήρες είναι από το 33 ώς το 127 του πίνακα ASCII
		q1.enqueue(random_queue_element);
	}
	
	//Εξάγω (dequeue) τιμές από την ουρά.
	//s1.print();   //Η εντολή αυτή λειτουργεί και εκτυπώνει (εξάγει) τόσα στοιχεία, όσα εισήχθησαν μέσα στην ουρά.
				    //Αλλά, αν κληθεί η print(), δε θα φανεί το φαινόμενο της εξαγωγής από άδεια ουρά.
					//Οπότε εναλλακτικά, καλούμε το χρήστη να επιλέξει το πλήθος των στοιχείων που θα γίνουν dequeue.
	cout<<"\n\nHow many random elements do you want to DEQUEUE outside of the queue (F.I.F.O. mode of dequeueing)?"<<endl;
	cout<< "(Type a positive integer and press ENTER): "<<endl;
	cin>>number_of_dequeued_elements;
	
	cout << "----------------------------------------" << endl;
	for(size_t i=0; i<number_of_dequeued_elements; i++)
		cout<<q1.dequeue()<<( q1.getDequeueValue() < q1.getEnqueueValue()-1 ? "'\n" : "\n");
	
	system("PAUSE > nul");
	return 0;
}
