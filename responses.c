//
//  responses.c
//  CAI lab3
//
//  Created by Nils Hollmer on 2018-11-24.
//  Copyright © 2018 Nils Hollmer. All rights reserved.
//

#include "responses.h"
#include <stdio.h>
#include <stdlib.h>

const char * posResp[6] = {"Very good!","Excellent!",
    "Nice work!","Well done!","Great!",
    "Keep up the good work!"};
const char * negResp[5] = {"No. Please try again.","Wrong.", "Try once again.",
    "Don’t give up!","No. Keep trying"};
static int i = 0;
static int j = 0;
void positiveResponse(void){
    if( i==6){
        i=0;
    }
    printf("%s\n", posResp[i++]);
    return;
}

void negativeResponse(void){
    if( j==5){
        j=0;
    }
    printf("%s\n", negResp[j++]);
    return;
}
