#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_STACK_SIZE 10
typedef int ele;
ele stack[MAX_STACK_SIZE];
int top = -1;

int is_empty() {
	return (top == -1);
}

int is_full() {
	return (top == (MAX_STACK_SIZE - 1));
}

void push(ele item) {
	if (is_full()) {
		fprintf(stderr, "stack full\n");
		return; 
	}
	else stack[++top] = item;
}

ele pop()
{
	if (is_empty()) {
		fprintf(stderr, "stack empty\n");
	}
	else return stack[top--];
}

int main() {

	srand(time(NULL));

	int i;

	for (i = 0; i < 31; i++) {

		int rand_num = rand() % 100 + 1;

		if (rand_num % 2 == 0) {
			push(rand_num);
			printf("push %d\n", rand_num);
		}
		else {
			pop(rand_num);
			printf("pop %d\n", rand_num);
		}
	}

	return 0;

}