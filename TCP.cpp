#include <iostream>
#include <unistd.h> 
#include <conio.h> 
#include <bits/stdc++.h>
using namespace std;
void words(){  
        int kmin=0,ksec=0,wpm=0,c=0;
        string b[30];
        string a[30] = { "Lorem", "ipsum", "dolor", "sit", "amet", "apple", "phone", "mozabique", "dell", "back", "flour", "hill","intel","headshot", "pine", "speaker", "communist", "zelinsky", "power", "festival", "high","kidney", "magnet", "timetable", "insert", "delete", "dolor", "sit", "soviet", "funky"};
        auto start = chrono::system_clock::now();
            for (int i = 0; i < 30; i++)
            {
                system("CLS");
                cout<<a[i]<<"\n\n";
                cin>>b[i];
            }
        auto end = chrono::system_clock::now();
        chrono::duration<double> elapsed_seconds = end-start;
        time_t end_time = chrono::system_clock::to_time_t(end);
        system("CLS");
        for ( int y=0; y < 30; y++)
            {
                if (a[y]==b[y])
                {
                    c++;
                }
                    else
                {
                    int k;
                    k++;
                }
            }
        float word_per_min;
        float apnatime=elapsed_seconds.count();
        kmin=apnatime/60;
        ksec=int(apnatime)%60;
        /*cout<<" Your taken Time in Minutes "<<kmin<<"\nTime in Seconds"<<ksec;*/
        word_per_min=(c*60)/apnatime;
        wpm=word_per_min;
        cout<<"\n\nYou Typed "<<c<< " Correct words out of 30 words in "<< elapsed_seconds.count() <<"sec\n\n"<<endl;
        cout<<" Correct WordsPerMinute (wpm) is "<<wpm;
}
int main() {
    system("CLS");
    system("Color 0A");
    cout<<"\t\t\t\t\t\t\tWelcome to the Words Per Minute Program\n\n";
    cout<<"Rules for the game\n";
    cout<<" 1. You have to type all the words as fast as you can and\n\n";
    cout<<" 2. Hit Enter to save & see next word \n\n";
    cout<<" 3. Program will be looking at the time don't worry for that :-)\n\n";
    cout<<" 4. Don't Look after for uppercase / Lowercase letters\n\n";
    cout<<" 5. This program calculates the correct words per minute \n\n";
    cout<<"Press 1 to start the game, 0 to exit\n";
    int st;
    cin>>st;
    if (st==1)
    {
        int s=10;
        while (s>=0)
        {
            system("CLS");
            cout<<"Your game will start in : "<< s <<" sec\n";
            s--;
            sleep(1);
        }
        words();
    }
    else
    {
        exit;
    }
    
}