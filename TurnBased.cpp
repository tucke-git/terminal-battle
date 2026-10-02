#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::string;
using std::exit;
using std::time;
using std::rand;

//All variables
int INTPlayerHealth = 30;
int INTEnemyHealth = 20;
int INTAttack;
int INTDefend;
int INTHeal;
int INTRun;

//All strings
string PlayerName;
string EnemyName = "RoboDroid";
string PlayerAction;

// function declarations
int choice(string PlayerAction);
int randomnumbergenerator();
int AutomatedEnemy();
int randomnumbergenerator2();

//calls out main state and integrates all functions
int main()
{
    cout << "Enter your player name:\n";
    cin >> PlayerName;
    cout << PlayerName << " encountered a " << EnemyName << "\n";
    while (INTEnemyHealth > 0 && INTPlayerHealth > 0)
    {
    cout << "Attack // Heal // Run" << "\n";
    cin >> PlayerAction;
    choice(PlayerAction);

    if (INTEnemyHealth <=0) break;

    AutomatedEnemy();
    }

    //determine the outcome after the loop[ ends
    if (INTEnemyHealth <= 0)
    {
        cout << "You won the fight!" << "\n";
    }
    else if (INTPlayerHealth <= 0)
    {
        cout << "You have died." << "\n";
    }
    return 0;
}

// takes in PlayerAction string and then chooses which Action to use
int choice(string PlayerAction)
{
    //just load a random number into the memory we will use for any of the player actions
    int rolled_num = randomnumbergenerator();
    if (PlayerAction == "Attack")
        {
            cout << "You attacked" << "\n";
            INTEnemyHealth -= rolled_num;
            cout << "Enemy Hit!\n" << "Enemy Health: " << INTEnemyHealth << "\n";

        }
    else if (PlayerAction == "Heal")
        {
            cout << "You healed" << "\n";
            INTPlayerHealth += rolled_num;
            if (INTPlayerHealth > 0)
            {
            cout << "Your HP is: " << INTPlayerHealth << "\n";
            }
            else
            cout << "You have been defeated" << "\n";
            exit(0);
        }
    else if (PlayerAction == "Run")
        {
            cout << "You tried to run." << "\n";
            if (rolled_num <= 6)
            {
                cout << "You ran away successfully!";
                exit(0); //exit 0 signals progrsam completed succesfully
            }
            else
            {
                cout << "You were not able to run away.";
            }
        }
    else
    {
        cout << "Please enter a valid action:" << "\n";
    }

    return 0;
}
//creates a random number for magnitude of player's heal/attack
int randomnumbergenerator()
{
    // Seed the random number generator once at startup
    std::srand(std::time(0));

    // Generate a number between 1 and 100 using the modulo operator
    // rand() % 100 gives 0-99, so we add 1 to make it 1-100
    int random_num = (std::rand() % 12) + 1;
    // std::cout << "Random number: " << random_num << std::endl;
    // Return this so it can leave the loop
    return random_num; 

}
// makes random number for magnitude of enemy heal/attack
int randomnumbergenerator2()
{
    // Seed the random number generator once at startup
    std::srand(std::time(0));

    // Generate a number between 1 and 100 using the modulo operator
    // rand() % 100 gives 0-99, so we add 1 to make it 1-100
    int random_num2 = (std::rand() % 12) + 1;
    // std::cout << "Random number: " << random_num << std::endl;
    // Return this so it can leave the loop
    return random_num2; 
}
//makes a random number for the enemy to choose to heal/attack/defend
int EnemyNumber()
{
    srand(time(0));
    int Auto_Enemy_Num = (rand() % 2) + 1;
    return Auto_Enemy_Num;
}
//Enemy action state
int AutomatedEnemy()
{
    int Enemy_Choice = EnemyNumber();
    int Enemy_Action_Number = randomnumbergenerator2();

    if (Enemy_Choice == 1)
    {
        cout << "The Enemy Attacks!" << "\n";
        INTPlayerHealth -= Enemy_Action_Number;
        cout << "Your remaining HP is: " << INTPlayerHealth << "\n";
    }
    else if (Enemy_Choice == 2)
    {
        cout << "The Enemy Heals" << "\n";
        INTEnemyHealth += Enemy_Action_Number;
        if (INTEnemyHealth > 0)
        {
        cout << "Enemy Hp is: " << INTEnemyHealth << "\n";
        }
        else
        {

            cout << "You won!" << "\n";
        }
    }
return 0;
}


// git add <filename>
// git commit -m "Brief description of what you changed"
// git push
