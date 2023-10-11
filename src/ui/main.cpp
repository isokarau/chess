#include "view/ChessBoardView.h"

#include <QApplication>
#include <QMainWindow>

#include <memory>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    auto game = std::make_unique<ui::ChessBoardView>();
    game->show();

    return app.exec();
}