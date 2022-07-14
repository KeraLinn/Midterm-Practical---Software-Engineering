#include "QuestionsAnswers.h"
#include <iostream>

void QuestionsAnswers::DisplayQuestion1()
{
    std::cout << "\tWhich of these animals is not part of the Chinese Zodiac?\n";
    std::cout << "\t\t1.  Ox\n" << "\t\t2.  Monkey\n" << "\t\t3.  Horse\n" << "\t\t4.  Cat\n\t";
    std::cin >> answerGuess;

    if (answerGuess == 4) {
        std::cout << "\n\tCorrect! Well done!\n\n";
        correctAnswer += 1;
    }
    else {
        std::cout << "\n\tYour answer is incorrect. The correct answer is number 4, the Cat.\n\n";
    }
}

void QuestionsAnswers::DisplayQuestion2()
{
    std::cout << "\tIn the Chinese myth of Chi Li, what supernatural creature did Chi Li slay?\n";
    std::cout << "\t\t1.  Minotaur\n" << "\t\t2.  Serpent\n" << "\t\t3.  Dragon\n" << "\t\t4.  Phoenix\n\t";
    std::cin >> answerGuess;

    if (answerGuess == 2) {
        std::cout << "\n\tCorrect! Well done!\n\n";
        correctAnswer += 1;
    }
    else {
        std::cout << "\n\tYour answer is incorrect. The correct answer is number 2, a monstrous serpent.\n\n";
    }
}

void QuestionsAnswers::DisplayQuestion3()
{
    std::cout << "\tIn Japanese mythology, who is the deity of the sun?\n";
    std::cout << "\t\t1.  Susano-o\n" << "\t\t2.  Tsukiyomi\n" << "\t\t3.  Amaterasu\n" << "\t\t4.  Orochi\n\t";
    std::cin >> answerGuess;

    if (answerGuess == 3) {
        std::cout << "\n\tCorrect! Well done!\n\n";
        correctAnswer += 1;
    }
    else {
        std::cout << "\n\tYour answer is incorrect. The correct answer is number 3, the goddess Amaterasu.\n\n";
    }
}

void QuestionsAnswers::DisplayQuestion4()
{
    std::cout << "\tWhich of these is not a labor of Hercules?\n";
    std::cout << "\t\t1.  Slay the Nemean lion\n" << "\t\t2.  Capture Cerberus\n" << "\t\t3.  Judge the fairest goddess\n" << "\t\t4.  None, these are all labors of Hercules\n\t";
    std::cin >> answerGuess;

    if (answerGuess == 3) {
        std::cout << "\n\tCorrect! Well done!\n\n";
        correctAnswer += 1;
    }
    else {
        std::cout << "\n\tYour answer is incorrect. The correct answer is number 3, judging the fairest goddess - that was completed by Paris, prince of Troy.\n\n";
    }
}
