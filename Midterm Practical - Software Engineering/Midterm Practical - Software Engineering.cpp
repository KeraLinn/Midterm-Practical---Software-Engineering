// Midterm Practical - Software Engineering.cpp
//

#include <iostream>
#include "QuestionsAnswers.h"

int main()
{
    int randomQuestion = 1 + (rand() % 4);
    bool playAgain = true;
    std::string YesOrNo = " ";
    QuestionsAnswers a;

    std::cout << "\n\tWelcome! \n\n\tYou will be asked a random question. \n\tUse your keyboard to indicate your answer (1-4) and press enter to submit.\n";

    while (playAgain) {
        std::cout << "\n";
        int randomQuestion = 1 + (rand() % 4);
        switch (randomQuestion) {
        case 1:
            a.DisplayQuestion1();
            break;
        case 2:
            a.DisplayQuestion2();
            break;
        case 3:
            a.DisplayQuestion3();
            break;
        case 4:
            a.DisplayQuestion4();
            break;
        }
        std::cout << "\tWould you like to play again (Y or N)? ";
        std::cin >> YesOrNo;
        if (YesOrNo == "N" || YesOrNo == "n" || YesOrNo == "No" || YesOrNo == "no") {
            playAgain == false;
            break;
        }
        else {
            continue;
        }
        break;
    }

    std::cout << "\n\n\tThanks for playing! You got " << a.correctAnswer << " answers correct!\n\n";
}

