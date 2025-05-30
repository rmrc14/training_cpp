#pragma once

template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(const T& d) : data(d), next(nullptr) {}
};
