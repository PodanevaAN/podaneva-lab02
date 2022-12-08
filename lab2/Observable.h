#ifndef OBSERVABLE_H
#define OBSERVABLE_H


#include <vector>
#include "IObserver.h"

class Observable {
private:
    std::vector<IObserver*> observers;

public:
    void attach(IObserver *observer);

    void detach(IObserver *observer);

    void notify(long size);
};


#endif //OBSERVABLE_H
