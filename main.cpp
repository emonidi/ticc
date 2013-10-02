#include <iostream>

using namespace std;

struct Field{
    int figure;
    int is_taken;
};


class Board{
public:
	//properties
	Field field;
	struct Field boardFields[9];
	int free_fields[];
	
	//constructor
    Board(){
    	//populate boardFields array with Field struct and initialize the struct values "figure" and "is_taken" with false;
        for(int i = 0; i < 9;++i){
            boardFields[i].figure = false;
            boardFields[i].is_taken = false;
        }

    }
	//gets a field from board by number 
    struct Field getField(int fieldNum){
    	
        return boardFields[fieldNum];
    }
	
	//sets field
    void setField(int fieldNum, int figure){
        boardFields[fieldNum].is_taken = true;
        boardFields[fieldNum].figure = figure;
        setFreeFields();
      //  cout << fieldNum << ":" << "is taken: " << boardFields[fieldNum].is_taken << endl << "figure: " << boardFields[fieldNum].figure << endl;
	}

private:
	//iteratest through all the fields and checks which one is free and which not
	int setFreeFields(){
		resetFreeFields();
		for(int i = 0; i<9; ++i){
			struct Field f = boardFields[i];
			if(f.is_taken){
				free_fields[i] = 1;
			}else{
				free_fields[i] = 0;
			}
			
	//	cout << free_fields[i]<<endl;
		}
	//	cout <<"turn"<<endl;
		
	}
	//reserts all the free_fields to 0 so they could be populated in setFreeFields();
	void resetFreeFields(){
		for(int i = 0; i<9; ++i){
			free_fields[i] = 0;
		}
	}
};


class Game{	
int winLines[8][3];
Board board;
	public:
		
		
		Game(Board board){
			winLines[0][0,1,2];
			winLines[1][3,4,5];
			winLines[2][6,7,8];
			winLines[3][0,3,6];
			winLines[4][1,4,7];
			winLines[5][2,5,8];
			winLines[6][0,4,8];
			winLines[7][2,4,6];
		};
		
		int checkWins(){
			int winner = 0;
			for(int i = 0; i < 9; ++i){
				
				int total = 0;
				cout << i;
				for(int j=0 ; j < 3; ++j){
				 cout << winLines[i][j] << endl;;
				//	cout << f.figure;
				}
			}
			return winner;
		}
		
	private:
};

int main()
{
  Board board = Board();
  board.setField(6,4);
  board.setField(0,4);
  board.setField(3,4);
  struct Field f = board.getField(6);
  Game game = Game(board);
  game.checkWins();
//  cout << board.free_fields[1];
  
}

