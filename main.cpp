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

	public:
		
		
		Game(){
			
			winLines[0][0] = {0};
			winLines[0][1] = {1};
			winLines[0][2] = {2};
			winLines[1][0] = {3};
			winLines[1][1] = {4};
			winLines[1][2] = {5};
			winLines[2][0] = {6};
			winLines[2][1] = {7};
			winLines[2][2] = {8};
			winLines[3][0] = {0};
			winLines[3][1] = {3};
			winLines[3][1] = {6};
		};
		
		int checkWins(Board board){
			int win = 0;
			for(int i = 0; i < 3; ++i){
				int total = 0;
				for(int j=0; j < 3; ++j){
					
					Field f  = board.getField(winLines[i][j]);
					total = total+f.figure;
				}
				
			   switch(total){
			   		
			   }
			}
		}
		
	private:
};


class Player{
public:
	int figure;
	
	Player(int figure){
		this->figure = figure;
	}
	
private:
};



int main()
{
  Board board;
  board.setField(0,4);
  board.setField(1,4);
  board.setField(2,4);
  struct Field f = board.getField(2);
  
  Game game = Game();
  game.checkWins(board);
  Player player_1(1);
  Player player_2(4);
  
}

