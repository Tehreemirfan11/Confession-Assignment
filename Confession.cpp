#include <iostream>
#include <string>

using namespace std;


int TotalTime(int readingTime, int writingTime) {
    return readingTime + writingTime;
}

string roastFeedback(int dailyTotalTime) {
    if (dailyTotalTime > 120) {
        return "Oh bhai, 2 ghante confessions mein laga diye?! Kya NASA mein job lagne wali hai is se? Acha hota yehi time kisi kaam ki cheez pe lagate. Zindagi mein kuch bara karna hai ya bas yahan hi phasna hai?";
    } else if (dailyTotalTime >= 60 && dailyTotalTime <= 120) {
        return "Vah, lagta hai aj sirf confession scroll karne ka irada tha. 1 se 2 ghante waste karke samajhte ho tumhari life set ho jayegi? Thora focus apne real goals pe bhi rakho, shayad kuch ban jao.";
    } else {
        return "Chalo, kam az kam tumne apni zindagi ke 1 ghante se kam hi barbaad kiye. Isi tarah control mein raho aur asli zindagi mein bhi kuch kar dikhane ka irada rakho!";
    }
}

string weekly(int weeklyTotalTime) {
    if (weeklyTotalTime > 600) {
        return "Kya baat hai, 10 ghante se zyada confessions mein ghusa hua hai? Jawan admi ho ya waqt barbaad karne ki machine? Kuch productive cheez socho, warna ye confessions tumhari CV mein nahi likhe jayenge!";
    } else {
        return "Wah bhai, lagta hai thoda waqt manage karna seekh rahe ho! Isi tarah apne goals par focus karo, warna ye confession wali duniya tumhe kabhi aagay nahi le jaayegi. Shabash, sahi raho!";
    }
}

int main() {
    const int days = 7;
    int readingTime[days], writingTime[days];
    int dailyTotal[days], weeklyTotal = 0;


    for (int i = 0; i < days; i++) {
        cout << "Day " << (i + 1) << " - Enter time spent reading confessions (in minutes): ";
        cin >> readingTime[i];
        cout << "Day " << (i + 1) << " - Enter time spent writing confessions (in minutes): ";
        cin >> writingTime[i];
        

        dailyTotal[i] = TotalTime(readingTime[i], writingTime[i]);
        weeklyTotal += dailyTotal[i];
        
        cout << "Feedback for Day " << (i + 1) << ": " << roastFeedback(dailyTotal[i]) << endl << endl;
    }

    cout << "Weekly Summary: " << weekly(weeklyTotal) << endl;

    return 0;
}
