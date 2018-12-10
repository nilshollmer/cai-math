//
//  menus.c
//  CAI lab3
//
//  Created by Nils Hollmer on 2018-11-24.
//  Copyright © 2018 Nils Hollmer. All rights reserved.
//

#include "menus.h"

int menuMain(void){
    int choice = 0;
    printf("\nYou can choose:\n");
    printf("1. Practise \n");
    printf("2. Take a test \n");
    printf("3. Exit program \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}
int menuPractice(void){
    int choice = 0;
    printf("\nWould you like to practice:\n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Addition and subtraction \n");
    printf("4. Exit to main menu \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}
int menuTest(void){
    int choice = 0;
    printf("\nWould you like to:\n");
    printf("1. Test addition\n");
    printf("2. Test subtraction\n");
    printf("3. Test addition and subtraction\n");
    printf("4. Exit to main menu \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

