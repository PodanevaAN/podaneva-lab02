#ifndef IOBSERVER_H
#define IOBSERVER_H

class IObserver {
public:
    virtual void update(long size) = 0; //Виртуальный общий метод для всех наблюдателей
};

#endif //IOBSERVER_H
