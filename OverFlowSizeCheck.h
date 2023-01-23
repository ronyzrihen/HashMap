//
// Created by Rony Zrihen on 23/01/2023.
//
#pragma once

class OverFlowSizeCheck{

public:

    bool legal(int index);
    void set_size(int size){m_size = size;};
    int get_size(){return m_size;};

private:

    int m_size;


};
