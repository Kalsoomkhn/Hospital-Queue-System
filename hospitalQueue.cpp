#include <iostream>
#include <queue>
#include <string>

struct patient {
	std::string name;
	int age;
	std::string father_name;
};

int main(){
	int nofq;
	std::cout << "enter the number of queues: ";
	std::cin >> nofq;

	std::queue<patient>* hospital = new std::queue<patient>[nofq];

	while (true) {
		std::cout << "\nHospital Queue System Menu:\n"
			<< "1. Add patient to Queue\n"
			<< "2. Remove patient from Queue\n"
			<< "3. Display Queue Status\n"
			<< "4. Exit\n"
			<< "Enter your choice: ";

		int choice;
		std::cin >> choice;

		switch (choice) {
		case 1: {
			int queueIndex;
			std::cout << "Enter the queue number to add the patient: ";
			std::cin >> queueIndex;

			if (queueIndex >= 0 && queueIndex < nofq) {
				patient newpatient;

				std::cout << "Enter patient Name: ";
				std::cin >> newpatient.name;

				std::cout << "Enter patient Age: ";
				std::cin >> newpatient.age;

				std::cout << "Enter patient Father Name: ";
				std::cin >> newpatient.father_name;

				hospital[queueIndex].push(newpatient);

				std::cout << "patient added to the queue.\n";
			}
			else {
				std::cout << "Invalid queue number.\n";
			}

			break;
		}
		case 2: {
			int queueIndex;
			std::cout << "Enter the queue number to remove the patient: ";
			std::cin >> queueIndex;

			if (queueIndex >= 0 && queueIndex < nofq) {
				if (!hospital[queueIndex].empty()) {
					hospital[queueIndex].pop();
					std::cout << "patient removed from the queue.\n";
				}
				else {
					std::cout << "Queue is empty. No patients to remove.\n";
				}
			}
			else {
				std::cout << "Invalid queue number.\n";
			}

			break;
		}
		case 3: {
			std::cout << "\nQueue Status:\n";
			for (int i = 0; i < nofq; ++i) {
				std::cout << "Queue " << i << " Size: " << hospital[i].size() << "\n";
			}
			break;
		}
		case 4:
			std::cout << "Exiting the program. Goodbye!\n";
			delete[] hospital;
			return 0;
		default:
			std::cout << "Invalid choice. Please try again.\n";
		}
	}

	return 0;
}