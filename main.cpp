#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <Counter.h>
#include <SecondCounter.h>
#include <QQuickWindow>
#include <QQmlContext>
#include <QQuickItem>


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QQmlContext* context = engine.rootContext();

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    QQuickWindow* rootWindow = qobject_cast<QQuickWindow*>(engine.rootObjects().at(0));
    context->setContextProperty("root", rootWindow);

    QQuickItem* rectangleItem = (rootWindow->findChild<QQuickItem*>("rectangle"));

    Counter a;
    SecondCounter b;
        QObject::connect(&a, SIGNAL(valueChanged(int)),
                         &b, SLOT(setValue(int)));

        a.setValue(12);
        rootWindow->setProperty("width", 1000);
    return app.exec();
}
