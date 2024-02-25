#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>

using namespace std;
int hour, minute, second;

void set_clock_time()
{
    cout << "--->Set Current Time<---" << endl;
    do
    {
        cout << "Enter Hours: ";
        cin >> hour;
    } while (!(hour >= 0 && hour < 24));
    do
    {
        cout << "Enter Minutes: ";
        cin >> minute;
    } while (!(minute >= 0 && minute < 60));
    do
    {
        cout << "Enter Seconds: ";
        cin >> second;
    } while (!(second >= 0 && second < 60));
}

void digital_clock(int hour, int minute, int second)
{
    while (true)
    {

        cout << "\033[2J\033[H";
        cout << "-----------------\n";
        cout << "----" << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << ":" << setw(2) << setfill('0') << second << "----" << endl;
        cout << "-----------------\n";
        second++;
        if (second > 59)
        {
            second = 0;
            minute++;
        }
        if (minute > 59)
        {
            minute = 0;
            hour++;
        }
        if (hour > 23)
        {
            hour = 0;
        }
        this_thread::sleep_for(1s);
    }
}

char choose()
{
    short int choice;
    cout << "Enter your choice (1 for Digital Clock | 2 for Stopwatch)" << endl;
    cin >> choice;
    if (choice == 1)
        return 'D';
    if (choice == 2)
        return 'S';

    return ' ';
}

void countdown_clock(int hour, int minute, int second)
{
    while (hour > 0 || minute > 0 || second > 0)
    {

        cout << "\033[2J\033[H";
        cout << "\t\t\t\t\t" << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << ":" << setw(2) << setfill('0') << second << endl;
        if (second < 1)
        {
            minute--;
            second = 60;
        }
        if (minute < 1 && hour > 0)
        {
            hour--;
            minute = 59;
        }

        second--;
        this_thread::sleep_for(1s);
    }

    cout << "time's up!!!" << endl;
}

int main()
{
    char choic;
    choic = choose();
    if (choic == ' ')
    {
        cout << "Invalid Choice" << endl;
        return -1;
    }

    set_clock_time();

    cout << "\033[2J\033[H";
    if (choic == 'D')
        digital_clock(hour, minute, second);
    if (choic == 'S')
        countdown_clock(hour, minute, second);
    return 0;
}