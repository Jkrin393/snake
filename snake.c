#include <stdio.h>
#include <stdlib.h>

# define BOARD_SIZE 10


/*function to print the 10x10 board*/
void print_board(char board[BOARD_SIZE][BOARD_SIZE]){
    int row;
    int col;

    for (row = 0; row<BOARD_SIZE; row++){
        for(col = 0; col<BOARD_SIZE; col++){
            printf("%c", board[row][col]);
            printf("\t");
        }
        printf("\n");

    }


}

//method to return data from struct food

//function to initialize a blank board with a nested loop

void init_board(char board[BOARD_SIZE][BOARD_SIZE]){
    int row;
    int col;
    for (row = 0; row<BOARD_SIZE; row++){
        for(col = 0; col<BOARD_SIZE; col++){
            board[row][col] = 'x';
        }

    }
}

//struct to create and update the snake using a linkedList

struct snake_def {
    
    int size;
    struct snake_body_instance* head;
    struct snake_body_instance* tail;
     
};

struct snake_body_instance{
    int col;
    int row;
    struct snake_body* next;
};

struct food {
    int col;
    int row;
};


int main(){

    char board[BOARD_SIZE][BOARD_SIZE];

    struct food food_location;
    food_location.col = 2;
    food_location.row = 2;

    struct snake_def snake;
        

    struct snake_body_instance* head = malloc(sizeof(struct snake_body_instance));
    int i;
    
    head->col = 4;
    head->row = 0;
    head->next = NULL;
    snake.size = 3;
    snake.head = head;
    snake.tail = head;
    for(i=0 ; i<snake.size;i++){
        struct snake_body_instance *body_part = malloc(sizeof(struct snake_body_instance));
        body_part->row = body_part->row - i;
        body_part->col = body_part->col;
        body_part->next = NULL;
        head->next = body_part;
        head = body_part;

    }


    

    init_board(board);
    board[food_location.col][food_location.row] = 'F';
    board[snake_body->row][snake_body->col] = 'S';

    print_board(board);



    return 0;

}