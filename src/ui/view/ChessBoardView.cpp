#include "ChessBoardView.h"

#include <QPainter>

namespace ui {

ChessBoardView::ChessBoardView(QWidget* parent) : QGraphicsView(parent), scene_(new QGraphicsScene(this)) {
    scene_->setSceneRect(0, 0, 800, 600);
    setScene(scene_);
    setFixedSize(800, 600);
}

ChessBoardView::~ChessBoardView() = default;

}  // namespace ui