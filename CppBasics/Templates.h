#pragma once

#include <iostream>
#include <tuple>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>

using namespace std;

template <typename T1, typename T2, typename T3> 

class Triplet {
public:
    T1 first;
    T2 second;
    T3 third;

    Triplet(const T1& one, const T2& two, const T3& three) : first(one), second(two), third(three) {

    }
};

class Templates
{
public:
    Templates();
    ~Templates();

    void StartTesting();
    void TupleExample();
    void SetExample();
    void MapExample();
    void StackExample();
    void QueueExample();
    void VectorExample();
};

