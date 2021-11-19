#include <stdio.h>

int main() {

	//my first program
	char name[10];
	int age;

	//name
	printf("Input your first name: ");
	scanf("%s", &name);

	// age
	printf("Input your Age: ");
	scanf("%d", &age);

	void printOutput() {
		printf("Hello %s, you are %d years old. \n", name, age);
	}


	if (age < 18) {
		printOutput();
		printf("You are too young Boy! Go work your ass off! You still go time!!! VIOLENCE\n\n\n");
	}
	else if (age <= 35) {
		printOutput();
		printf("You are still a youth, hopefully you are already married, have a job and caring for your family \n\n\n");
	}
	else {
		printOutput();
		printf("How was your youth stage Man? Did you use it well? I bet you are enjoying your retirement \n\n\n");
	}

	//printf("Hello %s, you are %d years old. \n", name, age);

	system("pause");

	return 0;
}
