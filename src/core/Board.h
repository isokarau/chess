#pragma once

#include "Piece.h"

#include <array>
#include <memory>
#include <optional>

namespace core {

static const size_t kRowsNumber    = 8;
static const size_t kColumnsNumber = 8;

class Board {
public:
    Board();

private:
    void InitDefaultState();

private:
    // TODO array -> vector probably would be better
    std::array<std::array<std::optional<Piece>, kColumnsNumber>, kRowsNumber> board_;
};

}  // namespace core