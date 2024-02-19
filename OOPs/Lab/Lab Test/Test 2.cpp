#include <bits/stdc++.h>
using namespace std;

class FootballGame { 

    public:
    int matchId;
    string homeTeamName;
    string awayTeamName;
    vector<string> homeTeamPlayers;
    vector<string> awayTeamPlayers;  
    int homeTeamScore = 0;
    int awayTeamScore = 0;


    FootballGame(int match, string homeTeam, string awayTeam) {
    	matchId = match;
    	homeTeamName = homeTeam;
    	awayTeamName = awayTeam;
    }

    void addPlayerToHomeTeam(string name1, string name2) {
    		homeTeamPlayers.push_back(name1);
    	    homeTeamPlayers.push_back(name2);
}
    void addPlayerToAwayTeam(string name3) {
    	    awayTeamPlayers.push_back(name3);
    }

    void updateScore(int x, int y) {
    	homeTeamScore = x;
    	awayTeamScore = y;
    }

    void displayMatchDetails() {
    	cout << "Match ID: "<< matchId << endl <<"Home Team: " << homeTeamName<< endl <<"Players: "<< endl;
        for(int i = 0; i<homeTeamPlayers.size(); i++) {
        	cout<< " -" << homeTeamPlayers[i] << endl;
        }
        /* Here i could also do above this like the following for loop -->
        for(auto a : homeTeamPlayers) {
    		cout <<" -" << a << endl;
    	}   */
    	cout << "Home Team Score: " << homeTeamScore << endl;


    	cout <<"Away Team: " << awayTeamName << endl;
    	cout << "Players: " << endl;
    	// for(int i = 0; i<awayTeamPlayers.size(); i++) {
    	// 	cout<<" -" << awayTeamPlayers[i] << endl;
    	// }
    	for(auto a : awayTeamPlayers) {
    		cout <<" -" << a << endl;
    	}
    	cout <<"Away Team Score: " << awayTeamScore << endl; 
    }
};

int main() {
	FootballGame f1(101, "Barcelona", "Real Madrid");
	f1.addPlayerToHomeTeam("Messi", "Ronaldo");
	f1.updateScore(2, 1);
	f1.addPlayerToAwayTeam("Neymar");
	f1.displayMatchDetails();
}

/* Output -->
Match ID: 101
Home Team: Barcelona
Players: 
-Messi
-Ronaldo
Home Team Score: 2
Away Team: Real Madrid
Players: 
-Neymar
Away Team Score: 1
*/  
