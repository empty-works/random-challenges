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

class BishopChess {
	std::vector<std::pair<int, int>> bishop_positions {std::make_pair(0,1), std::make_pair(1, 2), std::make_pair(2, 2), std::make_pair(4, 0)};
	int num_m {0};

	public:
	BishopChess(){}
	BishopChess(int in_num_m) {
		num_m = in_num_m;
	}

	void show_board();	
	void place_bishop(const std::pair<int, int>);
};

void BishopChess::show_board() {
	
}

int main() {
	return 0;
}
