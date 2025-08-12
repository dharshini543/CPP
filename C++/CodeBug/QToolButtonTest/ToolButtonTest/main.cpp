#include <QApplication>
#include <QToolBar>
#include <QMainWindow>
#include <QToolButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow mainWindow;
    QToolBar toolBar;
    mainWindow.setCentralWidget((QWidget*)&toolBar);
    QAction action;
    action.setText("Hello");
    QAction action2;
    action2.setText("World");
    QToolButton button;
    button.setDefaultAction(&action2);
    QObject::connect(&action, &QAction::triggered, &action, [&action, &button]{
        qDebug() << "action1 triggered" ;
        action.setVisible(false);
        button.setVisible(false);
    });
    QObject::connect(&action2, &QAction::triggered, &button, [&action2]{
        qDebug() << "Button action triggered" ;
        action2.setVisible(false);
    });

    // QObject::connect(&action2, &QAction::changed, [&button, &action2]() {
    //     button.setVisible(action2.isVisible());
    // });
    // QObject::connect(&action2, &QAction::visibleChanged, &button, &QWidget::setVisible);

    toolBar.addAction(&action);
    toolBar.addWidget(&button);
    mainWindow.show();
    return a.exec();
}
