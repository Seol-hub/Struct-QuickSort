#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRSIZE 50
#define SIZE 5

typedef struct student {
	char name[STRSIZE];
	int score;
} std;

void swap(std * a, std * b) {
	std temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void quickSort(std* c, int left, int right);

int main() {
	std c[SIZE];
	for (int i = 0; i < SIZE; i++) {
		printf("name: ");
		scanf("%s", &c[i].name);
		printf("score: ");
		scanf("%d", &c[i].score);
	}

	quickSort(c, 0, SIZE - 1);

	for (int i = 0; i < SIZE; i++) {
		printf("[name: %s, score: %d]\n", c[i].name, c[i].score);
	}

	return 0;
}

void quickSort(std* c, int left, int right) {
	int low, high, pivot;
	if (left < right) {
		low = left;
		high = right;
		pivot = left;
		while (low < high) {
			while (c[pivot].score > c[low].score) low++;
			while (c[pivot].score < c[high].score) high--;
			swap(&c[low], &c[high]);
		}
		swap(&c[pivot], &c[low]);
		quickSort(c, left, low - 1);
		quickSort(c, high + 1, right);
	}
}