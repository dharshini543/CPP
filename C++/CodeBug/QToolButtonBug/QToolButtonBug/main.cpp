#include <QApplication>
#include <QToolBar>
#include <QMainWindow>
#include <QToolButton>
#include<QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // QMainWindow mainWindow;
    // QToolBar toolBar;
    // mainWindow.setCentralWidget((QWidget*)&toolBar);
    // QAction action;
    // action.setText("Hello");
    // QAction action2;
    // action2.setText("World");
    // QToolButton button;
    // button.setDefaultAction(&action2);
    // QObject::connect(&action, &QAction::triggered, &action, [&action]{
    //     action.setVisible(false);
    // });
    // QObject::connect(&action2, &QAction::triggered, &action2, [&action2]{
    //     action2.setVisible(false);
    // });
    // toolBar.addAction(&action);
    // toolBar.addWidget(&button);
    // mainWindow.show();
    QWidget window;
    QPushButton *button = new QPushButton(&window);
    delete button;
    return a.exec();
}
