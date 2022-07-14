// Midterm Practical - Software Engineering.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int answerGuess = 0;
    int correctAnswer = 0;
    int wrongAnswer = 0;

    std::cout << "\tWelcome! \n\n\tYou will be asked a series of questions. \n\tUse your keyboard to indicate your answer (1-4) and press enter to submit.\n\n";

    std::cout << "\tWhich of these animals is not part of the Chinese Zodiac?\n";
    std::cout << "\t\t1.  Ox\n" << "\t\t2.  Monkey\n" << "\t\t3.  Horse\n" << "\t\t4.  Cat\n";
    std::cin >> answerGuess;
    
    if (answerGuess <= 3) {
        std::cout << "\n\tYour answer is incorrect. The correct answer is number 4, the Cat.\n\n";
        wrongAnswer += 1;
    }
    else {
        std::cout << "\n\tCorrect! Well done!\n\n";
        correctAnswer += 1;
    }

    std::cout << "\tIn the Chinese myth of Chi Li, what supernatural creature did Chi Li slay?\n";
    std::cout << "\t\t1.  Minotaur\n" << "\t\t2.  Serpent\n" << "\t\t3.  Dragon\n" << "\t\t4.  Phoenix\n";
    std::cin >> answerGuess;

    if (answerGuess == 2) {
        std::cout << "\n\tCorrect! Well done!\n\n";
        correctAnswer += 1;
    }
    else {
        std::cout << "\n\tYour answer is incorrect. The correct answer is number 2, a monstrous serpent.\n\n";
        wrongAnswer += 1;
    }

    std::cout << "\tIn Japanese mythology, who is the deity of the sun?\n";
    std::cout << "\t\t1.  Susano-o\n" << "\t\t2.  Tsukiyomi\n" << "\t\t3.  Amaterasu\n" << "\t\t4.  Orochi\n";
    std::cin >> answerGuess;

    if (answerGuess == 3) {
        std::cout << "\n\tCorrect! Well done!\n\n";
        correctAnswer += 1;
    }
    else {
        std::cout << "\n\tYour answer is incorrect. The correct answer is number 3, the goddess Amaterasu.\n\n";
        wrongAnswer += 1;
    }

    std::cout << "\tWhich of these is not a labor of Hercules?\n";
    std::cout << "\t\t1.  Slay the Nemean lion\n" << "\t\t2.  Capture Cerberus\n" << "\t\t3.  Judge the fairest goddess\n" << "\t\t4.  None, these are all labors of Hercules\n";
    std::cin >> answerGuess;

    if (answerGuess == 3) {
        std::cout << "\n\tCorrect! Well done!\n\n";
        correctAnswer += 1;
    }
    else {
        std::cout << "\n\tYour answer is incorrect. The correct answer is number 3, judging the fairest goddess - that was completed by Paris, prince of Troy.\n\n";
        wrongAnswer += 1;
    }

    std::cout << "\n\tThanks for playing! \n\tYou got " << correctAnswer << " of 4 questions correct.\n\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
