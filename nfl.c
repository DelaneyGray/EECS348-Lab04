#include <stdio.h>

void findScore(int targetScore, int currentCombo[], int comboLength);
void comboPrint(int final[], int comboLength);

int main() {

    int score;

    //prompt user, and set score as their input
    printf("Enter 0 or 1 to STOP\n");
    printf("Enter the NFL score: ");
    scanf("%d", &score);

    //Continue to prompt until stopped
    while(score != 0 && score != 1){
        printf("Possible Score Combinations: \n");
        
        int emptyCombo[1000];

        findScore(score, emptyCombo, 0);

        printf("Enter 0 or 1 to STOP\n");
        printf("Enter the NFL score: ");
        scanf("%d", &score);
    }

}


//reccursive, takes a difference and the keeps subtracting until 0 
void findScore(int targetScore, int currentCombo[], int comboLength){

    int possibleScores[] = {2, 3, 6, 7, 8};
    
    //base case, print it!
    if (targetScore == 0){

        comboPrint(currentCombo, comboLength);
        return;
    }

    //keep going! Reccursive case here:
    if (targetScore >= 2){

        //Try each score once every iteration
        for(int i = 0; i < 5; i++){

            int newTargetScore = targetScore - possibleScores[i];

            if(newTargetScore >= 0){
            //append score to combination
            currentCombo[comboLength] = possibleScores[i];


            //recursive here
            findScore(newTargetScore, currentCombo, comboLength + 1);
            }
        }
    }
    //if neither ( ==0, or >=2) true, Too far! dead path :( nothing happens.
}

//print formatting
void comboPrint(int final[], int comboLength){

//initializing count
int numSafety = 0;
int numFG = 0;
int numTD = 0;
int numTD2 = 0;
int numTDFG = 0;

//count each occurence of each score
    for(int i = 0; i < comboLength; i++){
        if (final[i] == 2){
            numSafety ++;
        }

        if (final[i] == 3){
            numFG ++;
        }

        if (final[i] == 6){
            numTD ++;
        }

        if (final[i] == 7){
            numTD2 ++;
        }

        if (final[i] == 8){
            numTDFG ++;
        }
    }  

// print combinations:
printf("[%d] TD + 2pt, [%d] TD + FG, [%d] TD, [%d] 3pt FG, [%d] Safety\n", 
       numTDFG, numTD2, numTD, numFG, numSafety);
      
}
