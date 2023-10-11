#pragma once

namespace core {

enum class PieceType {
    KING,
    QUEEN,
    ROOK,
    BISHOP,
    KNIGHT,
    PAWN,
};

enum class PieceColor {
    WHITE,
    BLACK,
};

struct Piece {
    Piece(PieceType type, PieceColor color);

    PieceType type_;
    PieceColor color_;
};

}  // namespace core