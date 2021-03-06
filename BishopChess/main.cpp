/* On our special chessboard, two bishops attack each 
 * other if they share the same diagonal. This includes 
 * bishops that have another bishop located between 
 * them, i.e. bishops can attack through pieces.
 *
 * You are given N bishops, represented as (row, column) 
 * tuples on an M by M chessboard. Write a function to 
 * count the number of pairs of bishops that attack 
 * each other. The ordering of the pair doesn't matter: 
 * (1, 2) is considered the same as (2, 1).
 *
 * For example, given M = 5 and the list of bishops:
 *
 * - (0, 0)
 * - (1, 2)
 * - (2, 2)
 * - (4, 0)
 *
 * The board would look like this:
 *
 * [b, 0, 0, 0, 0]
 * [0, 0, b, 0, 0]
 * [0, 0, b, 0, 0]
 * [0, 0, 0, 0, 0]
 * [b, 0, 0, 0, 0]
 *
 * You should return 2, since bishops 1 and 3 attack each 
 * other as well as bishops 3 and 4.
 * */

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

class BishopChess {
	std::vector<std::string> chess_board {};
	int num_m {0};

	public:
	BishopChess(){}
	BishopChess(int in_num_m) {
		num_m = in_num_m;
		chess_board = build_board();
	}

	std::vector<std::string> build_board();
	void show_board();	
	void place_bishop(const std::pair<int, int>);
};

std::vector<std::string> BishopChess::build_board() {
	std::vector<std::string> vec {};
	for(size_t i {0}; i < num_m; i++) {
		std::string row_str { "[ "};
		// Need to add 2 to make room for the brackets.
		for(size_t j {0}; j < num_m; j++) {
			row_str += "0 ";		
		}
		row_str += "]";
		vec.push_back(row_str);
	}	
	return vec;
}

void BishopChess::show_board() {
	for(auto line : chess_board) {
		std::cout << line << std::endl;	
	}	
}

void BishopChess::place_bishop(const std::pair<int, int> the_pair) {
	chess_board[the_pair.first][the_pair.second] = 'b'; 
}

int main() {
	BishopChess bc(5);
	bc.show_board();
	bc.place_bishop(std::pair<int, int>(0, 0));
	bc.show_board();
	return 0;
}
