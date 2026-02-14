#include <stdio.h>
#include <ctype.h>

int main()  {
    char questions[][100] = {"What's the biggest planet in our solar system?: ",
                             "What's 9 + 10?: ",
                             "What's the chance of a single coin landing heads?: "};
    char options[][100] = {"A. The Sun\nB. Saturn\nC. Jupiter\nD. Pluto",
                           "A. 19\nB. 21\nC. 109\nD. 910",
                           "A. 1/10\nB. 2/10\nC. 3/4\nD. 25/50"};
    char keyAnswers[] = {'C', 'A', 'D'};
    int questionAmount = sizeof(questions) / sizeof(questions[0]);
    char userAnswers[3] = {0};
    int score = 0;

    for(int i = 0; i < questionAmount; i++) {
        printf("%s\n", questions[i]);
        printf("%s\n", options[i]);
        for(int j = 0; j < 1; j++) {
            printf("Insert answer: ");
            scanf(" %c", &userAnswers[i]);
            userAnswers[i] = toupper(userAnswers[i]);   //ctype.h in action
        }
    }

    for(int i = 0; i < questionAmount; i++) {
        if(keyAnswers[i] == userAnswers[i]) {
            score++;
        }
    }
    
    printf("Congrats! You're %d/%d", score, questionAmount);
    return 0;
}