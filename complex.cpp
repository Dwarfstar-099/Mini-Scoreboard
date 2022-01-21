# include <iostream>
using namespace std;

class scoreboard{
    int score1, score2;
    
    public :
    void getscore(){
        cout << "Enter the score gained in Game 1 : ";
        cin >> score1;
        cout << "Enter the score gained in Game 2 : ";
        cin >> score2;
    }
    void totalscore (scoreboard s1, scoreboard s2){
        score1 = s1.score1 + s2.score1;
        score2 = s1.score2 + s2.score2;
    }
    void printscore(){
        cout << "Total scores in Game 1 is " << score1 << endl;
        cout << "Total scores in Game 2 is " << score2 << endl;
    }
};

int main (){
    scoreboard Qualify1, Qualify2, Qualify3;
        Qualify1.getscore();
        
        Qualify2.getscore();
        
        Qualify3.totalscore(Qualify1, Qualify2);
        Qualify3.printscore();

return 0;
}