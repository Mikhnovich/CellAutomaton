#include "cell_automaton.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CellAutomaton w;
    w.show();
    
    return a.exec();
}
