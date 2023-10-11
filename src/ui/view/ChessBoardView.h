#pragma once

#include "../../core/Game.h"

#include <QGraphicsView>

namespace ui {

class ChessBoardView : public QGraphicsView {
    Q_OBJECT

public:
    ChessBoardView(QWidget* parent = nullptr);
    ~ChessBoardView();

private:
    void DrawChessboard();
    void DrawPieces();

private:
    QGraphicsScene* scene_;
    core::Game game_;
};

}  // namespace ui