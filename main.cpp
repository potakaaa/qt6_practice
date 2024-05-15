#include <QCoreApplication>
#include <QTextStream>
using namespace std;

void displayName() {
    QTextStream qin(stdin);
    QTextStream qout(stdout);

    qout << "Enter your name: ";
    qout.flush();
    QString name = qin.readLine();

    qout << "Your name is " << name << "\n";
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    displayName();

    return a.exec();
}
