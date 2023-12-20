#pragma once

#include <functional>

namespace DummyNS
{
class DummyListener
{
public:
    virtual void callback() = 0;
};

class DummyClass final
{
    DummyClass(std::function<void()>f):mF(f) {}
    ~DummyClass() = default;
public:
    void setListener(DummyListener* listener); 
    void f();
private:
    DummyListener* mListener;
    std::function<void()> mF;
};
}