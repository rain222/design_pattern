#pragma once

template<class T>
class SingleTon{
public:
    static T &GetInstance() {
        return _t;
    }
    virtual ~SingleTon(){}
    SingleTon(const SingleTon &) = delete;
    SingleTon(SingleTon &&) = delete;
    SingleTon &operator=(const SingleTon &) = delete;
    SingleTon &operator=(SingleTon &&) = delete;
protected:
    SingleTon(){}
    static T _t;
};
template<class T>
T SingleTon<T>::_t;