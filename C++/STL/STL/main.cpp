// #include <iostream>
// using namespace std;
// #include<vector>

// class Student
// {
// private:
//     string m_name;
//     int m_rollNum;

// public:
//     Student(string name,int rollNum)
//     {
//         m_name = name;
//         m_rollNum = rollNum;
//     }
//     Student(const Student& stu)
//     {
//         cout<<"Copy constructor called"<<endl;
//         this->m_name = stu.m_name;
//         this->m_rollNum = stu.m_rollNum;
//     }
//     void print()
//     {
//         cout<<"Name:"<<m_name<<endl;
//         cout<<"Roll:"<<m_rollNum<<endl;
//     }
// };

// int main()
// {
//     Student stu1("Dharshini",21);
//     Student stu2("Pallavi",22);
//     Student stu3("Likitha",23);
//     Student stu4 = stu3;
//     vector<Student> students;
//     cout<<"Size oF students = "<<students.size();
//     // cout<<"begin"<<students.begin()->print()<<endl;
//     students.push_back(stu1);
//     students.push_back(stu2);
//     students.push_back(stu3);
//     students.push_back(stu4);

//     cout<<"Size oF students = "<<students.size()<<endl;

//     for(auto stu:students)
//     {
//         stu.print();
//     }
//     return 0;
// }


#include <QGuiApplication>
#include <QQuickWindow>
#include <QSGRectangleNode>
#include <QDebug>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQuickWindow window;
    window.show();
    window.create();  // Needed to initialize the scene graph

    // Make sure scenegraph is ready before creating nodes
    window.scheduleRenderJob(new QRunnable([&window]() {
                                 QSGRectangleNode *rectNode = window.createRectangleNode();
                                 if (!rectNode) {
                                     qWarning() << "Failed to create rectangle node.";
                                     return;
                                 }

                                 QColor expectedColor(Qt::red);
                                 rectNode->setColor(expectedColor);

                                 QColor actualColor = rectNode->color();
                                 if (!actualColor.isValid()) {
                                     qDebug() << "❌ Bug reproduced: color() returns invalid even after setColor().";
                                 } else if (actualColor != expectedColor) {
                                     qDebug() << "⚠️ Bug partially reproduced: returned color is incorrect:" << actualColor;
                                 } else {
                                     qDebug() << "✅ No bug: color() returns correct value:" << actualColor;
                                 }

                             }), QQuickWindow::BeforeSynchronizingStage);

    return app.exec();
}
