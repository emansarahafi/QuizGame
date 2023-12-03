#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;
int answer1, answer2, answer3, answer4, answer5, answer6, answer7, answer8, answer9, answer10, score1, score2, score3;
string playerName, player1, player2, player3;
char  A, B, C, D, subjectChoice,T, F, answerchoice1,answerchoice2, answerchoice3, answerchoice4, answerchoice5, answerchoice6, answerchoice7, answerchoice8, answerchoice9, answerchoice10, choice;

void showWelcome()
{
    cout << "Welcome to Geek O Pedia!\n";
    cout << endl << "Enter Your name : ";
    cin >> playerName;
}

int showMenu()
{
    
    cout << endl << endl;
    cout << "This is the main menu\n"<<
    "1. Play\n" <<
    "2. How to play\n" <<
    "3. Top scores\n" <<
    "4. Quit\n" <<
    "\n" <<
    "Enter your choice (1-4): ";
    cin >> choice;
    return choice;
}

void play()
{
    
    
    cout << "You chose to play! Please choose which subject do you want:\n"<<
    "1. Math\n" <<
    "2. Physics\n" <<
    "3. Chemistry\n" <<
    "Enter your choice (1-3): ";
    
    cin >> subjectChoice;
    
    switch (subjectChoice)
    {
        case '1':   //MATH
            
            
            //QUESTION 1
            cout << "\n";
            cout << "1. In the expression 432xy + 124xy, the “432” is called the:\n"<<
            
            "A. multiplier\n"<<
            
            "B. coefficient\n" <<
            
            "C. matrix\n" <<
            
            "D. prime\n"<<
            "Enter your choice (A-D): ";
            
            cin >> answerchoice1;
            answerchoice1 = toupper(answerchoice1);
            
            if (answerchoice1 == 'B')
            {
                cout << "\n Correct! You gain 10 points! \n";
                answer1 = 10;
            }
            else
            {
                cout << "\n The answer is incorrect.\n";
                answer1 = 0;
            }
            
            
            //QUESTION 2
            cout << "2. What is the quotient of 4 and 4?\n"<<
            
            "A. 8\n"<<
            
            "B. 16\n" <<
            
            "C. 0\n" <<
            
            "D. 1\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice2;
            answerchoice2 = toupper(answerchoice2);
            
            if (answerchoice2 == 'D'){
                cout << "\n Correct! You gain 10 points! \n";
                answer2 = 10;
            }
            else{
                cout << "\n The answer is incorrect.\n";
                answer2 = 0;
            }
            
            
            //QUESTION 3
            cout << "3. What is three fifth of 100?\n" <<
            "A. 3\n" <<
            "B. 5\n" <<
            "C. 20\n" <<
            "D. 60\n" <<
            "Enter your choice (A-D): ";
            cin >> answerchoice3;
            answerchoice3 = toupper(answerchoice3);
            if (answerchoice3 == 'D'){
                cout << "Correct! You gain 10 points!\n";
                answer3 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer3 = 0;
            }
            
            
            //QUESTION 4
            cout << "4. In a century how many months are there?\n" <<
            "A. 12\n"<<
            "B. 120\n"<<
            "C. 1200\n"<<
            "D. 12000\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice4;
            answerchoice4 = toupper(answerchoice4);
            if (answerchoice4 == 'C'){
                cout << "Correct! You gain 10 points!\n";
                answer4 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer4 = 0;
            }
            
            
            
            
            //QUESTION 5
            cout << "5. What is the reciprocal of 17/15?\n"<<
            "A. 1.13\n"<<
            "B. 15/17\n"<<
            "C. 17/15\n"<<
            "D. 30/34\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice5;
            answerchoice5 = toupper(answerchoice5);
            if (answerchoice5 == 'C'){
                cout << "Correct! You gain 10 points!\n";
                answer5 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer5 = 0;
            }
            
            
            //QUESTION 6
            cout << "6. What is the value of x if x^2 = 169\n"<<
            "A. 1\n"<<
            "B. 13\n"<<
            "C. 169\n"<<
            "D. 338\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice6;
            answerchoice6 = toupper(answerchoice6);
            if (answerchoice6 == 'B'){
                cout << "Correct! You gain 10 points!\n";
                answer6 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer6 = 0;
            }
            
            
            
            //QUESTION 7
            cout << "7. What is the square of 15?\n"<<
            "A. 15\n"<<
            "B. 30\n"<<
            "C. 252\n"<<
            "D. 225\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice7;
            answerchoice7 = toupper(answerchoice7);
            if (answerchoice7 == 'B'){
                cout << "Correct! You gain 10 points!\n";
                answer7 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer7 = 0;
            }
            
            
            
            //QUESTION 8
            cout << "8. How many years are there in a decade?\n"<<
            "A. 5\n"<<
            "B. 10\n"<<
            "C. 15\n"<<
            "D. 20\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice8;
            answerchoice8 = toupper(answerchoice8);
            if (answerchoice8 == 'D'){
                cout << "Correct! You gain 10 points!\n";
                answer8 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer8 = 0;
            }
            
            
            
            //QUESTION 9
            cout << "9. I am a number. I have 7 in the ones place. I am less than 80 but greater than 70. What is my number?\n"<<
            "A. 71\n"<<
            "B. 73\n" <<
            "C. 75\n" <<
            "D. 77\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice9;
            answerchoice9 = toupper(answerchoice9);
            if (answerchoice9 == 'D'){
                cout << "Correct! You gain 10 points!\n";
                answer9 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer9 = 0;
            }
            
            
            
            
            //QUESTION 10
            cout << "10. What is 7% equal to?\n"<<
            "A. 0.007\n" <<
            "B. 0.07\n" <<
            "C. 0.7\n" <<
            "D. 7\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice10;
            answerchoice10 = toupper(answerchoice10);
            if (answerchoice10 == 'D'){
                cout << "Correct! You gain 10 points!\n";
                answer10 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer10 = 0;
            }
            break;
            
            
            
        case '2':   //PHYSICS
            
            
            //Q1
            cout << "1. In an object is not moving, no forces are acting upon it: True or False?\n"<<
            "Enter your choice (T or F?): ";
            cin >> answerchoice1;
            answerchoice1 = toupper(answerchoice1);
            if (answerchoice1 == 'F'){
                cout << "Correct! You gain 10 points!\n";
                answer1 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer1 = 0;
            }
            //Q2
            cout << "2. Mass and weight are the same:: True or False?\n"<<
            "Enter your choice (T or F?): ";
            cin >> answerchoice2;
            answerchoice2 = toupper(answerchoice2);
            if (answerchoice2 == 'F'){
                cout << "Correct! You gain 10 points!\n";
                answer2 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer2 = 0;
            }
            //Q3
            cout << "3. Friction is a force that opposes motion: True or False?\n"<<
            "Enter your choice (T or F?): ";
            cin >> answerchoice3;
            answerchoice3 = toupper(answerchoice3);
            if (answerchoice3 == 'T'){
                cout << "Correct! You gain 10 points!\n";
                answer3 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer3 = 0;
            }
            //Q4
            cout << "4. Inertia is a vector quantity. It has both magnitude and direction: True or False?\n"<<
            "Enter your choice (T or F?): ";
            cin >> answerchoice4;
            answerchoice4 = toupper(answerchoice4);
            if (answerchoice4 == 'F'){
                cout << "Correct! You gain 10 points!\n";
                answer4 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer4 = 0;
            }
            //Q5
            cout << "5. The amount of matter in a chemical reaction changes: True or False?\n"<<
            "Enter your choice (T or F?): ";
            cin >> answerchoice5;
            answerchoice5 = toupper(answerchoice5);
            if (answerchoice5 == 'F'){
                cout << "Correct! You gain 10 points!\n";
                answer5 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer5 = 0;
            }
            //Q6
            cout << "6. A nonpolar bond is formed when two atoms share electrons unequally: True or False?\n"<<
            "Enter your choice (T or F?): ";
            cin >> answerchoice6;
            answerchoice6 = toupper(answerchoice6);
            if (answerchoice6 == 'F'){
                cout << "Correct! You gain 10 points!\n";
                answer6 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer6 = 0;
            }
            //Q7
            cout << "7. A low melting point is one property of molecular compund: True or False?\n"<<
            "Enter your choice (T or F?): ";
            cin >> answerchoice7;
            answerchoice7 = toupper(answerchoice7);
            if (answerchoice7 == 'T'){
                cout << "Correct! You gain 10 points!\n";
                answer7 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer7 = 0;
            }
            //Q8
            cout << "8. When electrons are transferred between two atoms, a covalent bond is formed: True or False?\n"<<
            "Enter your choice (T or F?): ";
            cin >> answerchoice8;
            answerchoice8 = toupper(answerchoice8);
            if (answerchoice8 == 'F'){
                cout << "Correct! You gain 10 points!\n";
                answer8 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer8 = 0;
            }
            //Q9
            cout << "9. Orderly crystal shapes, high melting points, and electrical conductivity when dissolved in water are properties of ionic compounds: True or False?\n"<<
            "Enter your choice (T or F?): ";
            cin >> answerchoice9;
            answerchoice9 = toupper(answerchoice9);
            if (answerchoice9 == 'T'){
                cout << "Correct! You gain 10 points!\n";
                answer9 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer9 = 0;
            }
            //Q10
            cout << "10. The properties of solids can be explained by the structure of and the bonding among the metal atoms: True or False?\n"<<
            "Enter your choice (T or F?): ";
            cin >> answerchoice10;
            answerchoice10 = toupper(answerchoice10);
            if (answerchoice10 == 'T'){
                cout << "Correct! You gain 10 points!\n";
                answer10 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer10 = 0;
            }
            
            break;
            
            
        case '3':   //CHEMISTRY
            //Q1
            cout << "1. Brass gets discoloured in air because of the presence of which of the following gases in air\n?"<<
            "A.    Oxygen\n"<<
            "B.    Hydrogen sulphide\n"<<
            "C.    Carbon dioxide\n"<<
            "D.    Nitrogen\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice1;
            answerchoice1 = toupper(answerchoice1);
            if (answerchoice1 == 'B'){
                cout << "Correct! You gain 10 points!\n";
                answer1 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer1 = 0;
            }
            //Q2
            cout << "2. Which of the following is a non metal that remains liquid at room temperature?\n"<<
            "A.    Phosphorous\n"<<
            "B.    Bromine\n"<<
            "C.    Chlorine\n"
            "D.    Helium\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice2;
            answerchoice2 = toupper(answerchoice2);
            if (answerchoice2 == 'B'){
                cout << "Correct! You gain 10 points!\n";
                answer2 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer2 = 0;
            }
            //Q3
            cout << "3. Chlorophyll is a naturally occurring chelate compound in which central metal is\n:"<<
            "A.    copper\n"<<
            "B.    magnesium\n"<<
            "C.    iron\n"<<
            "D.    calcium\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice3;
            answerchoice3 = toupper(answerchoice3);
            if (answerchoice3 == 'D'){
                cout << "Correct! You gain 10 points!\n";
                answer3 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer3 = 0;
            }
            //Q4
            cout << "4. Which of the following is used in pencils?\n"<<
            "A.    Graphite\n"<<
            "B.    Silicon\n"<<
            "C.    Charcoal\n"<<
            "D.    Phosphorous\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice4;
            answerchoice4 = toupper(answerchoice4);
            if (answerchoice4 == 'A'){
                cout << "Correct! You gain 10 points!\n";
                answer4 = 10;
            }
            else
            {
                cout << "The answer is incorrect.\n";
                answer4 = 0;
            }
            //Q5
            cout << "5. Which metal pollute the air of a big city?\n"<<
            "A.    Copper\n"<<
            "B.    Chromium\n"<<
            "C.    Lead\n"<<
            "D.    Cadmium\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice5;
            answerchoice5 = toupper(answerchoice5);
            if (answerchoice5 == 'C'){
                cout << "Correct! You gain 10 points!\n";
                answer5 = 10;
            }
            else
            {
                cout << "The answer is incorrect.\n";
                answer5 = 0;
            }
            //Q6
            cout << "6. Bell metal is an alloy of:\n"<<
            "A.    nickel and copper\n"<<
            "B.    zinc and copper\n"<<
            "C.    brass and nickel\n"<<
            "D.    tin and copper\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice6;
            answerchoice6 = toupper(answerchoice6);
            if (answerchoice6 == 'D'){
                cout << "Correct! You gain 10 points!\n";
                answer6 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer6 = 0;
            }
            //Q7
            cout << "7. The nucleus of an atom consists of:\n"<<
            "A.    electrons and neutrons\n"<<
            "B.    electrons and protons\n"<<
            "C.    protons and neutrons\n"<<
            "D.    All of the above\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice7;
            answerchoice7 = toupper(answerchoice7);
            if (answerchoice7 == 'C'){
                cout << "Correct! You gain 10 points!\n";
                answer7 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer7 = 0;
            }
            //Q8
            cout << "8. The most electronegative element among the following is:\n"<<
            "A.    sodium\n"<<
            "B.    bromine\n"<<
            "C.    fluorine\n"<<
            "D.    oxygen\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice8;
            answerchoice8 = toupper(answerchoice8);
            if (answerchoice8 == 'C'){
                cout << "Correct! You gain 10 points!\n";
                answer8 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer8 = 0;
            }
            //Q9
            cout << "9. The metal used to recover copper from a solution of copper sulphate is: \n"<<
            "A.    Na\n"<<
            "B.    Ag\n"<<
            "C.    Hg\n"<<
            "D.    Fe\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice9;
            answerchoice9 = toupper(answerchoice9);
            if (answerchoice9 == 'D')
            {
                cout << "Correct! You gain 10 points!\n";
                answer9 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer9 = 0;
            }
            //Q10
            cout << "10. The most abundant rare gas in the atmosphere is: \n"<<
            "A.    He\n"<<
            "B.    Ne\n"<<
            "C.    Ar\n"<<
            "D.    Xe\n"<<
            "Enter your choice (A-D): ";
            cin >> answerchoice10;
            answerchoice10 = toupper(answerchoice10);
            if (answerchoice10 == 'C')
            {
                cout << "Correct! You gain 10 points!\n";
                answer10 = 10;
            }
            else{
                cout << "The answer is incorrect.\n";
                answer10 = 0;
            }
            break;
            
            
            
            
        default:    //INVALID CHOICE
            cout<< "\n\n The choice you entered is not valid\n\n";
            exit(0);
            break;
    }
    
    //CALCULATING RESULTS
    int total [] = {answer1, answer2, answer3, answer4, answer5, answer6, answer7,answer8,answer9, answer10};
    int n, result=0;
    
    for ( n=0 ; n<10 ; n++ )
    {
        result += total[n];
    }
    
    cout << "Your result is:" << result << endl;
    
    if (result >= 70)
    {
        cout << "  ,ad8888ba,    ,ad8888ba,    888b      88    ,ad8888ba,   88888888ba          db    888888888888  88        88  88                  db         88    ,ad8888ba,    888b      88   ad88888ba   88  "<<endl;
        cout << " d8\"\'    `\"8b  d8\"\'    `\"8b   8888b     88   d8\"\'    `\"8b  88      \"8b        d88b        88       88        88  88                 d88b        88   d8\"\'    `\"8b   8888b     88  d8\"     \"8b  88  "<<endl;
        cout << "d8\'           d8'        `8b  88 `8b    88  d8\'            88      ,8P       d8\'`8b       88       88        88  88                d8\'`8b       88  d8\'        `8b  88 `8b    88  Y8,          88  "<<endl;
        cout << "88            88          88  88  `8b   88  88             88aaaaaa8P'      d8\'  `8b      88       88        88  88               d8\'  `8b      88  88          88  88  `8b   88  `Y8aaaaa,    88  "<<endl;
        cout << "88            88          88  88   `8b  88  88      88888  88\"\"\"\"88\'       d8YaaaaY8b     88       88        88  88              d8YaaaaY8b     88  88          88  88   `8b  88    `\"\"\"\"\"8b,  88  "<<endl;
        cout << "Y8,           Y8,        ,8P  88    `8b 88  Y8,        88  88    `8b      d8\"\"\"\"\"\"\"\"8b    88       88        88  88             d8\"\"\"\"\"\"\"\"8b    88  Y8,        ,8P  88    `8b 88          `8b  \"\"  "<<endl;
        cout << " Y8a.    .a8P  Y8a.    .a8P   88     `8888   Y8a.    .a88  88     `8b    d8\'        `8b   88       Y8a.    .a8P  88            d8\'        `8b   88   Y8a.    .a8P   88     `8888  Y8a     a8P  aa  "<<endl;
        cout << "  `\"Y8888Y\"\'    `\"Y8888Y\"\'    88      `888    `\"Y88888P\"   88      `8b  d8\'          `8b  88        `\"Y8888Y\"\'   88888888888  d8\'          `8b  88    `\"Y8888Y\"\'    88      `888   \"Y88888P\"   88  "<<endl;
        
        
        srand(time(0));
        int numdig;
        char let1, let2, let3;
        let1 = rand() % (90 - 65 + 1) + 65;
        let2 = rand() % (90 - 65 + 1) + 65;
        let3 = rand() % (90 - 65 + 1) + 65;
        numdig = rand() % (9999 - 1000 + 1) + 1000;
        
        cout <<"\n\n Don't forget our limited time offer:\n Since you won this quiz, you’ll receive a code that you can use only once for one our games that you need to purchase online.\n" << "Your discount code: "<< let1<<let2<<let3<<numdig<<endl;
    }
    else
    {
        cout << "\nSorry! Better luck next time!";
    }

      if (result > score3)
      {
          score3 = result;
          player3 = playerName;
      }
      
      int tempScore;
      string tempName;
      
      if (score3 > score2)
      {
          tempScore = score2;
          tempName = player2;
          
          score2 = score3;
          player2 = player3;
          
          score3 = tempScore;
          player3 = tempName;
      }
      
      if (score2 > score1)
      {
          tempScore = score1;
          tempName = player1;
          
          score1 = score2;
          player1 = player2;
          
          score2 = tempScore;
          player2 = tempName;
      }
      
      
      cout << "\n\n Top Players List\n";
      cout << "------------------\n";
      
      cout << "1- " << player1 << "\t" << score1 << endl;
      cout << "2- " << player2 << "\t" << score2 << endl;
      cout << "3- " << player3 << "\t" << score3 << endl;
      
      ofstream updateTopPlayers;
      updateTopPlayers.open("topList.txt");
      
      updateTopPlayers << player1 << endl;
      updateTopPlayers << score1 << endl;
      updateTopPlayers << player2 << endl;
      updateTopPlayers << score2 << endl;
      updateTopPlayers << player3 << endl;
      updateTopPlayers << score3 << endl;
      
      updateTopPlayers.close();
}





void instructions()
{
    cout << "From the title! You can understand that this game is only for the geeks!\n"<<
    "Are you a geek? Well let's find out!\n"<<
    "The game is simple: You'll be offered 3 geeky subjects\n"<<
    "Math, physics and chemistry.\n"<<
    "The answers could be multiple choice or true or false.\n"<<
    "Just answer correctly and we'll see if you're really a geek or not!\n"<<
    "Good luck! You'll need it!\n";
}


void topList ()
{
    ifstream topPlayers;
    topPlayers.open("topList.txt");
    
    cout << "Top Players List\n";
    cout << "------------------\n";
    
    topPlayers >> player1;
    topPlayers >> score1;
    topPlayers >> player2;
    topPlayers >> score2;
    topPlayers >> player3;
    topPlayers >> score3;
    
    cout << "1- " << player1 << "\t" << score1 << endl;
    cout << "2- " << player2 << "\t" << score2 << endl;
    cout << "3- " << player3 << "\t" << score3 << endl;
    
    topPlayers.close();
    
}

int main()
{
    
    showWelcome();
    showMenu();
    
    switch (choice)
    {
        case '1':
            play();
            break;
            
        case '2':
            instructions();
            cout<< "Press ENTER to go back to the main menu\n\n";
            cin.get();
            getchar();
            main();
            break;
            
        case '3':
            topList();
            cout<< "Press ENTER to go back to the main menu\n\n";
            cin.get();
            getchar();
            main();
            break;
            
        case '4':
            exit(0);
            
        default:
            cout << "Please enter a valid menu choice\n";
            cout<< "Press ENTER to go back to the main menu\n\n";
            cin.get();
            getchar();
            main();
            break;
    }
    
    
    return 0;
}
