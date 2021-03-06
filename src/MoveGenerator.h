//
// Created by velkejondra on 12/31/20.
//

#ifndef CHESS_ENGINE_CPP_MOVEGENERATOR_H
#define CHESS_ENGINE_CPP_MOVEGENERATOR_H


#include "Board.h"
#include <iostream>
#include <vector>

bitboard shift_leftos(bitboard num, int shift_size);

bitboard shift_rightos(bitboard num, int shift_size);

int add(int a, int b);

int sub(int a, int b);

class MoveGenerator {
public:
    std::vector<Move> getLegalMoves(Board &board);

    void getPseudoLegalMoves(std::vector<Move> &moves, Board &board);

    void getKnightAttacks(std::vector<Move> &moves, Board &board);

    void getPawnAttacks(std::vector<Move> &moves, Board &board);

    void getBishopAttacks(std::vector<Move> &vector, Board &board);

    void getRookAttacks(std::vector<Move> &vector, Board &board);

    void getQueenAttacks(std::vector<Move> &vector, Board &board);

    void getKingAttacks(std::vector<Move> &vector, Board &board);
};


#endif //CHESS_ENGINE_CPP_MOVEGENERATOR_H
