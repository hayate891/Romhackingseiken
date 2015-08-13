#pragma once
#include <vector>
#include "types.hpp"


struct Block
{
    Block(int index, int begin, int end = 0) : indexes(1, index), begin(begin), end(end) {};
    inline bool operator< (const Block& other) const { return begin < other.begin; }

  public:
    std::vector<int> indexes;
    int begin;
    int end;
    std::vector<u8> data;

    static void insert_blocks(std::vector<Block>& blocks, const char* outname);
    static std::vector<Block> extract_blocks();
};
