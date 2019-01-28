#include "mainwindow.h"
#include <QApplication>
#include "dvhstartup.h"
#include <QstyleFactory>
int main(int argc, char *argv[])
{QStringList list = QStyleFactory::keys();
    qApp->setStyle(QStyleFactory::create("Fusion"));
    QPalette darkPalette;
    darkPalette.setColor(QPalette::Window, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Base, QColor(25, 25, 25));
    darkPalette.setColor(QPalette::AlternateBase, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Button, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::BrightText, Qt::red);
    darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));

    darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
    darkPalette.setColor(QPalette::HighlightedText, Qt::black);

    qApp->setPalette(darkPalette);

    qApp->setStyleSheet(
        "QScrollArea{background-color:" + QColor(84, 84, 84).name() + ";}"
        "QSplitter::handle{background:" + QColor(84, 84, 84).name() + ";}"
        "QComboBox { color: #000000; background-color: #ffffff; border: 1px solid white; }"
        "QLineEdit { color: #000000; background-color: #ffffff; border: 1px solid white; }"
        "QToolTip { color: #ffffff; background-color: #2a82da; border: 1px solid white; }"
        "QMainWindow { background-image: url(); border: 1px solid white; }");
    QApplication a(argc, argv);
    MainWindow w;
    QPixmap bkgrd("C:\\Users\\msjcf\\OneDrive\\Documents\\large icons\\Menu Bar Backgroud.jpg");
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgrd);
    w.setPalette(palette);
   // w.setBackgroundRole(QPalette::Background);
    w.showMaximized();
    DVHstartup s;
    s.setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::FramelessWindowHint | Qt::CustomizeWindowHint);
    s.show();
    return a.exec();
}
