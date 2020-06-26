#ifndef WEATHERAPPLICATION_H
#define WEATHERAPPLICATION_H

#include <QGuiApplication>

class WeatherApplication : public QGuiApplication
{
public:
    explicit WeatherApplication(int argc, char *argv[]);
    virtual ~WeatherApplication();
};

#endif // WEATHERAPPLICATION_H
