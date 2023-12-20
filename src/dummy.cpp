#include <dummy.h>

namespace DummyNS
{
void DummyClass::setListener(DummyListener* listener)
{
    mListener = listener;
}

void DummyClass::f()
{
    if (mListener != nullptr)
    {
        mListener->callback();
    }
}

}