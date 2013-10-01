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
	struct Field boardFields[];
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
		}
		
	}
	//reserts all the free_fields to 0 so they could be populated in setFreeFields();
	void resetFreeFields(){
		for(int i = 0; i<9; ++i){
			free_fields[i] = 0;
		}
	}


};

int main()
{
  Board board = Board();
  board.setField(6,4);
  struct Field f = board.getField(6);
  cout << board.free_fields[6];
  
}

