#include<iostream>
#include<stdlib.h>

using namespace std;

char name[20];
int array[2];

void question1();
void question2();
void question3();
void question4();
void question5();
void lifeline();
void fiftyfifty();
void audiencepoll();
void question1mod();
void question2mod();
void question3mod();
void question4mod();
void question5mod();
void display_money(int);

class details
{
    public:char name[20];
    public:void greet_player()
    {
        cout<<"WELCOME TO KBC"<<"\n";
        cout<<"PLEASE ENTER YOUR NAME: ";
        cin>>name;
    }
    public:void intsructions()
    {
        cout<<"\nWELCOME TO KBC, "<<name<<"\n";
        cout<<"HERE ARE THE INSTRUCTIONS:\n";
        cout<<"\t1."<<"There are 5 questions."<<"\n"<<"\t2."<<"You got to think of the answer and enter its option in the input provided."<<"\n"<<"\t3."<<"Two lifelines are provided which are displayed above each question."<<"\n"<<"\t4."<<"Each Lifeline can be used only once."<<"\n"<<"\t5."<<"If the answer provided turns out to be right, you will get to answer the next question. Otherwise the game get excited if it encounters a wrong option"<<"\n"<<"\n";

    }
};

int main()
{
    details user;
	user.greet_player();
	user.intsructions();
    question1();

}

//Question 1
void question1()
{

    char option;

    cout<<"1. The major tribal group in Bihar?"<<"\n";
    cout<<"[a] Santhals"<<"\t"<<"\t"<<"[b] todas"<<"\n";
    cout<<"[c] Bhils"<<"\t"<<"\t"<<"[d] Lechpas"<<"\n";

    lifeline();

    cout<<"Enter option: ";
    cin>>option;

    if(option == 'a')
    {
        cout<<"CORRECT ANSWER"<<"\n"<<"\n";
        display_money(1);

        question2();
    }
    else
    {
        cout<<"WRONG ANSWER"<<"\n"<<"THE GAME WILL BE EXITED NOW"<<"\n"<<"THANK YOU FOR PLAYING"<<"\n"<<"\n";
        exit(0);
    }
}
//Question 2
void question2()
{
    char option;

    cout<<"2. Which does not belong to the UN?"<<"\n";
    cout<<"[a] FAO"<<"\t"<<"\t"<<"[b] ILO"<<"\n";
    cout<<"[c] WHO"<<"\t"<<"\t"<<"[d] ASEAN"<<"\n";

    lifeline();

    cout<<"Enter option: ";
    cin>>option;

    if(option == 'd')
    {
        cout<<"CORRECT ANSWER"<<"\n"<<"\n"<<"\n";
        display_money(2);

        question3();
    }
    else
    {
        cout<<"WRONG ANSWER"<<"\n"<<"THE GAME WILL BE EXITED NOW"<<"\n"<<"THANK YOU FOR PLAYING"<<"\n"<<"\n";
        exit(0);
    }
}
//Question 3
void question3()
{
    char option;

    cout<<"3. The Battle of Plassey was fought in"<<"\n";
    cout<<"[a] 1757"<<"\t"<<"\t"<<"[b] 1775"<<"\n";
    cout<<"[c] 1576"<<"\t"<<"\t"<<"[d] 1761"<<"\n"<<"\n";

    lifeline();

    cout<<"Enter option: ";
    cin>>option;

    if(option == 'a')
    {
        cout<<"CORRECT ANSWER"<<"\n"<<"\n";
        display_money(3);

        question4();
    }
    else
    {
        cout<<"WRONG ANSWER"<<"\n"<<"THE GAME WILL BE EXITED NOW"<<"\n"<<"THANK YOU FOR PLAYING"<<"\n"<<"\n";
        exit(0);
    }
}
//Question 4
void question4()
{
    char option;

    cout<<"4. The currency of Yugoslavia is"<<"\n";
    cout<<"[a] pound"<<"\t"<<"\t"<<"[b] peso"<<"\n";
    cout<<"[c] dinar"<<"\t"<<"\t"<<"[d] Lira"<<"\n"<<"\n";

    lifeline();

    cout<<"Enter option: ";
    cin>>option;

    if(option == 'a')
    {
        cout<<"CORRECT ANSWER"<<"\n"<<"\n";
        display_money(4);
        question5();
    }
    else
    {
        cout<<"WRONG ANSWER"<<"\n"<<"THE GAME WILL BE EXITED NOW"<<"\n"<<"THANK YOU FOR PLAYING"<<"\n"<<"\n";
        exit(0);
    }
}
//Question 5
void question5()
{
    char option;

    cout<<"5. The first chief of Air Staff of India"<<"\n";
    cout<<"[a] A.M.Engineer"<<"\t"<<"[b] R.D.Katari"<<"\n";
    cout<<"[c] S.Manekshaw"<<"\t"<<"\t"<<"[d] Thomas Elmhrist"<<"\n"<<"\n";

    lifeline();

    cout<<"Enter option: ";
    cin>>option;

    if(option == 'd')
    {
        cout<<"CORRECT ANSWER"<<"\n"<<"\n";
        display_money(5);

        cout<<"YOU HAVE COMPLETED ASWERING ALL THE QUESTIONS OF THE GAME SUCCESSFULLY. CONGRAGULATIONS!!!"<<"\n"<<"YOU HAVE EARNED Rs. 10000000"<<"\n"<<"THANK YOU FOR PLAYING THIS GAME, "<<name<<"\n"<<"\n";
    }
    else
    {
        cout<<"WRONG ANSWER"<<"\n"<<"THE GAME WILL BE EXITED NOW"<<"\n"<<"THANK YOU FOR PLAYING"<<"\n"<<"\n";
        exit(0);
    }
}

void lifeline()
{

        char option;
        int num = 0;
        int num2 = 0;
        int num3 = 0;

        if((array[0] == 0) | (array[1] == 0))
        {
                cout<<"Do you want to choose a Lifeline? y/n"<<"\n";
                cin>>option;
        }

        if((array[0] == 1) && (array[1] == 1))
            {
                cout<<"Do you want to choose a lifeline? y/n"<<"\n";
                cin>>option;
                if(option == 'y')
                {
                    cout<<"SORRY, NO MORE LIFELINES CAN BE USED. PLEASE ENTER ONE TO QUIT THE GAME"<<"\n";
                    cin>>num;
                    if(num == 1)
                    {
                        exit(0);
                    }
                }

            }
        if(option == 'y')
        {

            if((array[0] == 0) && (array[1] == 0))
            {
                cout<<"Enter 1 for 50 50 and 2 for audience poll"<<"\n";
                cin>>num2;

                if(num2 == 1)
                {
                    fiftyfifty();
                }
                else
				{
					if(num2 == 2)
                	{
                    	audiencepoll();
                	}
                	else if(num2 > 2)
              	  	{
               	     	cout<<"Invalid option"<<"\n";
                 	}
                }
            }
            else if(array[0] == 1)
            {
                cout<<"YOU ARE LEFT WITH ONLY ONE LIFELINE => audience poll."<<"\n"<<"PLEASE ENTER 1 TO PROCEED"<<"\n";
                cin>>num3;
                if(array[1]==0)
                {
                    if(num3 == 1)
                    {
                        audiencepoll();
                    }
                }
                else
                {
                    cout<<"SORRY, ALL LIFELINES HAVE BEEN USED"<<"\n";
                    cout<<"THE GAME WILL BE EXITED NOW. THANK YOU FOR PLAYING"<<"\n";
                }

            }
            else if(array[1] == 1)
            {
                cout<<"YOU ARE LEFT WITH ONLY ONE LIFELINE => 50 50."<<"\n"<<"PLEASE ENTER 1 TO PROCEED"<<"\n";
                cin>>num3;
                if(array[0]==0)
                {
                    if(num3 == 1)
                    {
                        fiftyfifty();
                    }
                }
                else
                {
                    cout<<"SORRY, ALL LIFELINES HAVE BEEN USED"<<"\n";
                    cout<<"THE GAME WILL BE EXITED NOW. THANK YOU FOR PLAYING"<<"\n";
                }
            }
        }
        else if(option == 'n')
        {
            return;
        }
}

//Question 1
void question1mod()
{

    char option;

    cout<<"1. The major tribal group in Bihar?"<<"\n";
    cout<<"[a] Santhals"<<"\t"<<"\t"<<"[b] "<<"\n";
    cout<<"[c] Bhils"<<"\t"<<"\t"<<"[d] "<<"\n"<<"\n";

    cout<<"Enter option: ";
    cin>>option;

    if(option == 'a')

    {
        cout<<"CORRECT ANSWER"<<"\n"<<"\n";
        display_money(1);

        question2();
    }
    else
    {
        cout<<"WRONG ANSWER"<<"\n"<<"THE GAME WILL BE EXITED NOW"<<"\n"<<"THANK YOU FOR PLAYING"<<"\n"<<"\n";
        exit(0);
    }
}
//Question 2
void question2mod()
{
    char option;

    cout<<"2. Which does not belong to the UN?"<<"\n";
    cout<<"[a] "<<"\t"<<"\t"<<"[b] "<<"\n";
    cout<<"[c] WHO"<<"\t"<<"\t"<<"[d] ASEAN"<<"\n"<<"\n";

    cout<<"Enter option: ";
    cin>>option;

    if(option == 'd')
    {
        cout<<"CORRECT ANSWER"<<"\n"<<"\n";
        display_money(2);

        question3();
    }
    else
    {
        cout<<"WRONG ANSWER"<<"\n"<<"THE GAME WILL BE EXITED NOW"<<"\n"<<"THANK YOU FOR PLAYING"<<"\n"<<"\n";
        exit(0);
    }
}
//Question 3
void question3mod()
{
    char option;

    cout<<"3. The Battle of Plassey was fought in"<<"\n";
    cout<<"[a] 1757"<<"\t"<<"\t"<<"[b] "<<"\n";
    cout<<"[c] "<<"\t"<<"\t"<<"[d] 1761"<<"\n"<<"\n";

    cout<<"Enter option: ";
    cin>>option;

    if(option == 'a')
    {
        cout<<"CORRECT ANSWER"<<"\n"<<"\n";
        display_money(3);

        question4();
    }
    else
    {
        cout<<"WRONG ANSWER"<<"\n"<<"THE GAME WILL BE EXITED NOW"<<"\n"<<"THANK YOU FOR PLAYING"<<"\n"<<"\n";
        exit(0);
    }
}
//Question 4
void question4mod()
{
    char option;

    cout<<"4. The currency of Yugoslavia is"<<"\n";
    cout<<"[a] pound"<<"\t"<<"\t"<<"[b] peso"<<"\n";
    cout<<"[c] "<<"\t"<<"\t"<<"[d] "<<"\n"<<"\n";

    cout<<"Enter option: ";
    cin>>option;

    if(option == 'a')
    {
        cout<<"CORRECT ANSWER"<<"\n"<<"\n";
        display_money(4);

        question5();
    }
    else
    {
        cout<<"WRONG ANSWER"<<"\n"<<"THE GAME WILL BE EXITED NOW"<<"\n"<<"THANK YOU FOR PLAYING"<<"\n"<<"\n";
        exit(0);
    }
}
//Question 5
void question5mod()
{
    char option;

    cout<<"5. The first chief of Air Staff of India"<<"\n";
    cout<<"[a] "<<"\t"<<"[b] R.D.Katari"<<"\n";
    cout<<"[c] "<<"\t"<<"\t"<<"[d] Thomas Elmhrist"<<"\n"<<"\n";

    cout<<"Enter option: ";
    cin>>option;

    if(option == 'd')
    {
        cout<<"CORRECT ANSWER"<<"\n"<<"\n";
        display_money(5);

        cout<<"YOU HAVE COMPLETED ASWERING ALL THE QUESTIONS OF THE GAME SUCCESSFULLY. CONGRAGULATIONS!!!"<<"\n"<<"YOU HAVE EARNED Rs. 10000000"<<"\n"<<"THANK YOU FOR PLAYING THIS GAME, "<<name<<"\n"<<"\n";
    }
    else
    {
        cout<<"WRONG ANSWER"<<"\n"<<"THE GAME WILL BE EXITED NOW"<<"\n"<<"THANK YOU FOR PLAYING"<<"\n"<<"\n";
        exit(0);
    }
}

void fiftyfifty()
{
    int num;
    array[0] = 1;
    cout<<"PLEASE ENTER THE QUESTION NUMBER"<<"\n";
    cin>>num;

    if(num == 1)
    {
        question1mod();
    }
    else if(num == 2)
    {
        question2mod();
    }
    else if(num == 3)
    {
        question3mod();
    }
    else if(num == 4)
    {
        question4mod();
    }
    else if(num == 5)
    {
        question5mod();
    }
}

void audiencepoll()
{
    int num = 0, que_no;
    char option;
    array[1] = 1;

    cout<<"PLEASE ENTER THE QUESTION NUMBER"<<"\n";
    cin>>que_no;

    cout<<"THE AUDIENCE POLL FOR THIS QUESTION HAS BEEN CONSIDERED"<<"\n"<<"PLEASE ENTER 1 TO CONTINUE"<<"\n";
    cin>>num;
    if(num == 1)
    {
        if(que_no == 1)
        {
            cout<<"The Option chosen by the audience: a"<<"\n";
            cout<<"PLEASE ENTER YOUR OPTION: ";
            cin>>option;
            cout<<"\n";

            if(option == 'a')
            {
                cout<<"CORRECT ANSWER"<<"\n"<<"\n"<<"\n";
                display_money(1);

                question2();
            }
            else
            {
                cout<<"WRONG ANSWER"<<"\n"<<"THE GAME WILL BE EXITED NOW"<<"\n"<<"THANK YOU FOR PLAYING"<<"\n"<<"\n";
                exit(0);
            }
        }
        else if(que_no == 2)
        {
            cout<<"The Option chosen by the audience: a"<<"\n";
            cout<<"PLEASE ENTER YOUR OPTION: ";
            cin>>option;
            cout<<"\n";

            if(option == 'd')
            {
                cout<<"CORRECT ANSWER"<<"\n"<<"\n"<<"\n";
                display_money(2);

                question3();
            }
            else
            {
                cout<<"WRONG ANSWER"<<"\n"<<"THE GAME WILL BE EXITED NOW"<<"\n"<<"THANK YOU FOR PLAYING"<<"\n"<<"\n";
                exit(0);
            }
        }
        else if(que_no == 3)
        {
            cout<<"The Option chosen by the audience: a"<<"\n";
            cout<<"PLEASE ENTER YOUR OPTION: ";
            cin>>option;
            cout<<"\n";

            if(option == 'a')
            {
                cout<<"CORRECT ANSWER"<<"\n"<<"\n"<<"\n";
                display_money(3);

                question4();
            }
            else
            {
                cout<<"WRONG ANSWER"<<"\n"<<"THE GAME WILL BE EXITED NOW"<<"\n"<<"THANK YOU FOR PLAYING"<<"\n"<<"\n";
                exit(0);
            }
        }
        else if(que_no == 4)
        {
            cout<<"The Option chosen by the audience: a"<<"\n";
            cout<<"PLEASE ENTER YOUR OPTION: ";
            cin>>option;
            cout<<"\n";

            if(option == 'a')
            {
                cout<<"CORRECT ANSWER"<<"\n"<<"\n"<<"\n";
                display_money(4);

                question5();
            }
            else
            {
                cout<<"WRONG ANSWER"<<"\n"<<"THE GAME WILL BE EXITED NOW"<<"\n"<<"THANK YOU FOR PLAYING"<<"\n"<<"\n";
                exit(0);
            }
        }
        else if (que_no == 5)
        {
            cout<<"The Option chosen by the audience: a"<<"\n";
            cout<<"PLEASE ENTER YOUR OPTION: ";
            cin>>option;
            cout<<"\n";

            if(option == 'd')
            {
                cout<<"CORRECT ANSWER"<<"\n"<<"\n"<<"\n";
                display_money(5);

                cout<<"YOU HAVE COMPLETED ASWERING ALL THE QUESTIONS OF THE GAME SUCCESSFULLY. CONGRAGULATION!!!"<<"\n"<<"YOU HAVE EARNED Rs. 10000000"<<"\n"<<"THANK YOU FOR PLAYING THIS GAME, "<<name<<"\n"<<"\n";
            }
            else
            {
                cout<<"WRONG ANSWER"<<"\n"<<"THE GAME WILL BE EXITED NOW"<<"\n"<<"THANK YOU FOR PLAYING."<<"\n"<<"\n";
                exit(0);
            }
        }
    }
}

void display_money(int num)
{
    if(num == 1)
    {
        cout<<"  10000000\n  5000000\n  300000\n  50000\n=>10000\n\n";
        cout<<"YOU HAVE EARNED => Rs. 10000\n\n";
    }
    if(num == 2)
    {
        cout<<"  10000000\n  5000000\n  300000\n=>50000\n  10000\n\n";
        cout<<"YOU HAVE EARNED => Rs. 50000"<<"\n"<<"\n";
    }
    if(num == 3)
    {
        cout<<"  10000000\n  5000000\n=>300000\n  50000\n  10000\n\n";
        cout<<"YOU HAVE EARNED => Rs. 300000"<<"\n"<<"\n";
    }
    if(num == 4)
    {
        cout<<"  10000000\n=>5000000\n  300000\n  50000\n  10000\n\n";
        cout<<"YOU HAVE EARNED => Rs. 5000000"<<"\n"<<"\n";
    }
    if(num == 5)
    {
        cout<<"=>10000000\n  5000000\n  300000\n  50000\n  10000\n\n";
        cout<<"YOU HAVE EARNED => Rs. 10000000"<<"\n"<<"\n";
    }
}

