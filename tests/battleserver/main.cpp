#include <QCoreApplication>

#include "battleservertest.h"
#include "pokemontestrunner.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    PokemonTestRunner runner;
    runner.setName("battleserver");
    runner.addTest(new BattleServerTest());
    runner.start();

    return a.exec();
}
