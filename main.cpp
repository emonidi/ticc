#include <iostream>

#include <iostream>
#include <map>
using namespace std;

struct Field{
    int figure;
    int is_taken;
};


class Board{
public:
Field field;
struct Field boardFields[];
int free_fields[];

    Board(){
        for(int i = 0; i < 9;++i){
            boardFields[i].figure = false;
            boardFields[i].is_taken = false;
        }

    }

    struct Field getField(int fieldNum){
    	
        return boardFields[fieldNum];
    }

    void setField(int fieldNum, int figure){
        boardFields[fieldNum].is_taken = true;
        boardFields[fieldNum].figure = figure;
        
	}
	
	int freeFields(){
		int fields[9];
		return fields;
	}
	

private:
	


};

int main()
{
  Board board = Board();
  board.setField(6,4);
  struct Field f = board.getField(6);
  int freeFields = board.freeFields();
  
}

