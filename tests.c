//
//  tests.c
//  CAI lab3
//
//  Created by Nils Hollmer on 2018-11-25.
//  Copyright © 2018 Nils Hollmer. All rights reserved.
//

#include "tests.h"
#include <stdlib.h>
#define MAX 99
#define QUESTIONS 15

void addTest(void){
    int correct, wrong, svar, i;
    float avg;
    int count = 1;
    int results[15][4];
    correct = wrong = 0;
    
    printf("\nYou have chosen to test yourself in addition.\n");
    printf("You will now be given 15 questions to solve:\n");
    for(i=0;i < QUESTIONS;i++) {
//Addition
        int a,b;
        a = results[i][0] = rand() % MAX+1;
        b = results[i][1] = rand() % (MAX-a)+1;
        results[i][2] = a + b;
        printf("\n%d. %d + %d = \n", count++, a, b);
        printf("Enter your answer: ");
        scanf("%d", &svar);
        results[i][3] = svar;
        if (svar != a+b) {
            wrong += 1;
        } else if (svar == a+b) {
            correct += 1;
        }
    }
    printf("Test completed!\n");
    avg = (100.0/(float)QUESTIONS)*(float)correct;
    printf("Number of correct answers: %d\n", correct);
    printf("Number of wrong answers: %d\n", wrong);
    
    // Prints out the questions, correct answers and user answers
    printf("\nQuestion:\t\tCorrect answer:\tYour Answer:\n");
    for (i=0; i<15; i++) {
        printf("%d:\t%d + %d\t\t\t\t\t%d\t\t\t %d\n",i+1,results[i][0],results[i][1],results[i][2],results[i][3]);
    }
    printf("\nTest result: %.2f%%\n", avg);
    return;
}
void subTest(void){
    int correct, wrong, svar, i;
    float avg;
    int count = 1;
    int results[15][4];
    correct = wrong = 0;
    
    printf("\nYou have chosen to test yourself in subtraction.\n");
    printf("You will now be given 15 questions to solve:\n");
    for(i=0;i < QUESTIONS;i++) {
//Subtraction
        int a,b;
        a = results[i][0] = rand() % MAX+1;
        b = results[i][1] = rand() % a+1;
        results[i][2] = a - b;
        printf("\n%d. %d - %d = \n", count++, a, b);
        printf("Enter your answer: ");
        scanf("%d", &svar);
        results[i][3] = svar;
        if (svar != a-b) {
            wrong += 1;
        } else if (svar == a-b) {
            correct += 1;
        }
    }
    printf("Test completed!\n");
    avg = (100.0/(float)QUESTIONS)*(float)correct;
    printf("Number of correct answers: %d\n", correct);
    printf("Number of wrong answers: %d\n", wrong);
    
//Prints out the questions, correct answers and user answers
    printf("\nQuestion:\t\tCorrect answer:\tYour Answer:\n");
    for (i=0; i<15; i++) {
        printf("%d:\t%d - %d\t\t\t\t\t%d\t\t\t %d\n",i+1,results[i][0],results[i][1],results[i][2],results[i][3]);
    }
    printf("\nTest result: %.2f%%\n", avg);
    
    return;
}
void addSubTest(void){
    int correct, wrong, svar, i;
    float avg;
    int count = 1;
    int results[15][4];
    char conv[16];
    correct = wrong = 0;
    
    printf("\nYou have chosen to test yourself in addition and subtraction.\n");
    printf("You will now be given 15 questions to solve:\n");
    for(i=0;i < QUESTIONS;i++) {
        int s = rand() % 2;
        if (s==0){
//Addition
            int a,b;
            conv[i] = '+';
            a = results[i][0] = rand() % MAX+1;
            b = results[i][1] = rand() % (MAX+1-a);
            results[i][2] = a + b;
            printf("\n%d. %d + %d = \n", count++, a, b);
            printf("Enter your answer: ");
            scanf("%d", &svar);
            results[i][3] = svar;
            if (svar != a+b) {
                wrong += 1;
            } else if (svar == a+b) {
                correct += 1;
            }
        } else {
//Subtraction
            int a,b;
            conv[i] ='-';
            a = results[i][0] = rand() % MAX+1;
            b = results[i][1] = rand() % a+1;
            results[i][2] = a - b;
            printf("\n%d. %d - %d = \n", count++, a, b);
            printf("Enter your answer: ");
            scanf("%d", &svar);
            results[i][3] = svar;
            if (svar != a-b) {
                wrong += 1;
            } else if (svar == a-b) {
                correct += 1;
            }
        }
    }
    printf("\nTest completed!\n");
    avg = (100.0/(float)QUESTIONS)*(float)correct;
    printf("Number of correct answers: %d\n", correct);
    printf("Number of wrong answers: %d\n", wrong);
    
//Prints out the questions, correct answers and user answers
    printf("\nQuestion:\t\tCorrect answer:\tYour Answer:\n");
    for (i=0; i<15; i++) {
        printf("%d:\t%d %c %d\t\t\t\t\t%d\t\t\t %d\n",i+1,results[i][0], conv[i],results[i][1],results[i][2],results[i][3]);
    }
    printf("\nTest result: %.2f%%\n", avg);
    return;
}
