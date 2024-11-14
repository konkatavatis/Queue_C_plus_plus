#ifndef QUEUE_H  //Οι εντολές #ifndef, #define και #endif λειτουργούν συνδυαστικά.  
	#define QUEUE_H  //Δεν είναι απαραίτητες, αλλά κάνουν τη δημιουργία αντικείμένων (από το 2ο αντικείμενο και μετά) πιο γρήγορη.
	
	#include <iostream> //για τα cout/cin
	#include <cstring>  //για να λειτουργήσει η strlen() που μετρά το πλήθος των στοιχείων ενός αλφαριθμητικού
	#include <cstdlib>  //για τη χρήση της εντολής system()
	#include <ctime>  //για τη χρήση της time() μέσα στην srand()
	using namespace std;
	
	#define SIZE 10 //Το μέγιστο μέγεθος της ουράς
	
	class Queue
	{
		private:
			char queue[SIZE]; //Η δομή της ουράς υλοποιημένης με μονοδιάστατο πίνακα χαρακτήρων
			int enqueue_value, dequeue_value; //Μεταβλητές που αντιστοιχούν στην αρχή και στο τέλος της ουράς
			
		public:
			Queue(); //constructor μέθοδος
			
			//setters
			void setQueue(char);  //εισαγωγή ενός στοιχείου στην ουρά
			void setEnqueueValue(int);  //βοηθητική μεταβλητή για εισαγωγή ενός στοιχείου στην ουρά (στο τέλος)
			void setDequeueValue(int);  //βοηθητική μεταβλητή για εξαγωγή ενός στοιχείου στην ουρά (από την αρχή)
			//getters
			char getQueue() const; //Εμφανίζει το τελευταίο στοιχείο της ουράς
			int getEnqueueValue() const; //Εμφανίζει το στοιχείο που εισάγεται στην ουρά
			int getDequeueValue() const; //Εμφανίζει το στοιχείο που εξάγεται από την ουρά
			
			void print();  //H print δεν επιτρέπεται να γραφεί ως const μιας και καλεί μέσα στον κώδικα της την dequeue
			void enqueue(char);  //Εισαγωγή μέσα στην ουρά - Αλλάζει την ουρά, άρα δεν πρέπει να γραφεί const
			char dequeue();    //Εξαγωγή από στην ουρά - Αλλάζει την ουρά, άρα δεν πρέπει να γραφεί const
	};
#endif
