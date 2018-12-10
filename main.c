//
3
//  CAI lab3
//
//  Created by Nils Hollmer on 2018-11-24.
//  Copyright © 2018 Nils Hollmer. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "responses.h"
#include "menus.h"
#include "practices.h"
#include "tests.h"

int main() {
    int choice = 0;
    char name[20];
    time_t t;
    srand((unsigned) time(&t));
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Welcome, %s!\n", name);
    //Main menu
    while (choice != 3) {
        choice = menuMain();
        
    //Practice menu
        if (choice == 1) {
            choice = menuPractice();
            while (choice != 4) {
                if (choice == 1){
                    addPractice();
                } else if (choice == 2){
                    subPractice();
                } else if (choice == 3){
                    addSubPractice();
                } else {
                    printf("You didn't enter a valid number.\nEnter your choice: ");
                    scanf("%d", &choice);
                }
                choice = 4;

            }
    //Test menu
        } else if (choice == 2){
            choice = menuTest();
            while (choice != 4) {
                if (choice == 1){
                    addTest();
                } else if (choice == 2){
                    subTest();
                } else if (choice == 3){
                    addSubTest();
                } else {
                    printf("You didn't enter a valid number.\nEnter your choice: ");
                    scanf("%d", &choice);
                }
                choice = menuTest();
            }
            
        } else if (choice == 3){
            break;
        } else {
            printf("You didn't enter a valid number.\nEnter your choice: ");
            scanf("%d", &choice);
        }
        
    }
    return 0;
}
