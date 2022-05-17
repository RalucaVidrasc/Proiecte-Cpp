#include <iostream>

using namespace std;

int main()
{

	int Tea = 10;
	int Coffee = 10;
	int Water = 10;
	int Choice;

	while (Tea > 0 || Coffee >0 || Water > 0  ) {
		printf("\nDrinks Available\n1: Tea: $0.55\n2: Coffee: $0.65\n3: Water: $0.75\n\nPlease enter number corresponding to the drink\n");
		cin >> Choice;
		switch (Choice) {
		case 1:
			if (Tea > 0) {
				Tea--;
				cout << Tea << " Tea left\n";
			}
			else{
				cout << "\nNo Tea left\n";
			}

			break;
		case 2:
			if (Coffee > 0) {
				Coffee--;
				cout << Coffee << " Coffee left\n";
			}
			else {
				cout << "\nNo Coffee left\n";
			}
			break;
		case 3:
			if (Water > 0) {
				Water--;
				cout << Water << " Water left\n";
			}
			else {
				cout << "\nNo Water left\n";
			}
			break;
		default:
			printf("Your entry was invalid. Please try again.\n");
		}
	}

	printf("\n***You ran out\n");

	system("pause");
}
	//	return 0;