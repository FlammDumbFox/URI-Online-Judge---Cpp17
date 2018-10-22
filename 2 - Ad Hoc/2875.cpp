#include <iostream>

using namespace std;

enum direction { N, W, S, E };
// N = 0, W = 1, S = 2, E = 3
// This lets us use the modulo operation to easily determine a direction change should it "overflow" over 3 or "underflow" below 0.

typedef struct cartStruct{
    int directionFacing;
    int directionLast;
} CartStruct;

typedef struct position{
    int x, y;
} Position;

// Não é pra ser void

void searchPath(){
    // something

    // Search below, sides and above for an open path to which the cart can travel
    // Return directions, perhaps? Or make it an infinite loop ending where no more "0"s can be found.

}

int main(){
    int width, height;
    while(cin >> width >> height){
        char *field = (char*) malloc(width * height * sizeof(char));

        Position startPosition;

        // Fetch char matrix representing the field through which the cart (X) must travel
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                cin >> field[i][j];

                // Whenever "X" is input, save its position, as the cart will start from here.
                if(field[i][j] == 'X'){
                    startPosition.x = j;
                    startPosition.y = i;
                }
            }
        }



    }
}