/* 315CA Dinu Ion Irinel 
 * 315CA Serban Bianca-Sanziana
 */

#ifndef __ROPE__
#define __ROPE__
#define EMPTY ""
#include "utils.h"


typedef struct RopeNode RopeNode;

struct RopeNode {
    RopeNode* left;
    RopeNode* right;
    const char* str;
    int weight;
};

typedef struct RopeTree RopeTree;

struct RopeTree {
    RopeNode* root;
};

typedef struct SplitPair SplitPair;

struct SplitPair {
    RopeNode* left;
    RopeNode* right;
};

int total_weight(RopeNode *rt);

RopeNode* makeRopeNode(const char* str);

RopeTree* makeRopeTree(RopeNode* root);

void printRopeNode(RopeNode* rn);

void printRopeTree(RopeTree* rt);

void debugRopeNode(RopeNode* rn, int indent);

RopeNode *copy_rope(RopeNode *rn);

RopeTree* concat(RopeTree* rt1, RopeTree* rt2);

char __indexRope(RopeNode *node, int idx);

char indexRope(RopeTree* rt, int idx);

char* search(RopeTree* rt, int start, int end);

void __split(RopeNode **left_rn, RopeNode **right_rn, int idx);

SplitPair split(RopeTree* rt, int idx);

RopeTree* insert(RopeTree* rt, int idx, const char* str);

RopeTree* delete(RopeTree* rt, int start, int len);

#endif  // __ROPE__
