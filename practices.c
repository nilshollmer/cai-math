//
//  practices.c
//  CAI lab3
//
//  Created by Nils Hollmer on 2018-11-25.
//  Copyright © 2018 Nils Hollmer. All rights reserved.
//

#include "practices.h"
#include <stdlib.h>
#include "responses.h"
#define MAX 99
#define QUESTIONS 10
void addPractice(void){
    int correct = 0;
    int svar;
    int count = 1;
    
    printf("\nYou have chosen to practice addition.\n");
    printf("Now you will be given 10 questions to solve:\n");
    while (correct < QUESTIONS) {
        int a = rand() % MAX+1;
        int b = rand() % (MAX-a)+1;
        printf("\n%d. %d + %d = \n", count++, a, b);
        printf("Enter your answer: ");
        scanf("%d", &svar);
        while (svar != a + b) {
            negativeResponse();
            printf("Enter your answer: ");
            scanf("%d", &svar);
        }
        positiveResponse();
        correct += 1;
    }
    printf("Practice completed!\n");
    return;
}

void subPractice(void){
    int correct = 0;
    int svar;
    int count = 1;
    printf("\nYou have chosen to practice subtraction.\n");
    printf("Now you will be given 10 questions to solve:\n");
    while (correct < QUESTIONS) {
        int a = rand() % MAX+1;
        int b = rand() % a+1;
        printf("\n%d. %d - %d = \n", count++, a, b);
        printf("Enter your answer: ");
        scanf("%d", &svar);
        while (svar != a - b) {
            negativeResponse();
            printf("Enter your answer: ");
            scanf("%d", &svar);
        }
        positiveResponse();
        correct += 1;
    }
    printf("Practice completed!\n");
    return;
}

void addSubPractice(void){
    int correct = 0;
    int svar;
    int count = 1;
    
    printf("\nYou have chosen to practice addition and subtraction.\n");
    printf("Now you will be given 10 questions to solve:\n");
    while (correct < QUESTIONS) {
        int s = rand() % 2;
        if (s==0){
            int a = rand() % MAX+1;
            int b = rand() % (MAX-a)+1;
            printf("\n%d. %d + %d = \n", count++, a, b);
            printf("Enter your answer: ");
            scanf("%d", &svar);
            while (svar != a + b) {
                printf("No. Please try again. Enter your answer: ");
                scanf("%d", &svar);
            }
            printf("Very good!\n");
            correct += 1;
        } else
        {
            int a = rand() % MAX+1;
            int b = rand() % a+1;
            printf("\n%d. %d - %d = \n", count++, a, b);
            printf("Enter your answer: ");
            scanf("%d", &svar);
            while (svar != a - b) {
                negativeResponse();
                printf("Enter your answer: ");
                scanf("%d", &svar);
            }
            positiveResponse();
            correct += 1;
        }
    }
    printf("Practice completed!\n");
    return;
}
