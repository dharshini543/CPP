#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    webView = new QWebEngineView(this);
    webView->setUrl(QUrl("https://www.qt.io"));
    setCentralWidget(webView);
}

MainWindow::~MainWindow() {
}
