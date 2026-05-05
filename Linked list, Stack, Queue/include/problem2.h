#ifndef PROB2_H
#define PROB2_H

#include <vector>
#include <string>
#include <initializer_list>

// 구조체 선언
// ══════════════════════════════════════════════════════════════════════════════
//  (A) Array-based Polynomial
// ══════════════════════════════════════════════════════════════════════════════
struct ArrayPoly {
    std::vector<double> coeffs;  // coeffs[i] = coefficient of x^i

    ArrayPoly();
    ArrayPoly(std::initializer_list<double> c);
    int degree() const;
    void print(const std::string& name) const;
    double evaluate(double x) const;
};

ArrayPoly arrayAdd(const ArrayPoly& a, const ArrayPoly& b);
ArrayPoly arraySub(const ArrayPoly& a, const ArrayPoly& b);

// ══════════════════════════════════════════════════════════════════════════════
//  (B) Linked-list Polynomial
// ══════════════════════════════════════════════════════════════════════════════
struct PolyNode {
    double coeff;
    int    degree;
    PolyNode* next;
    
    PolyNode(double c, int d);
};

struct ListPoly {
    PolyNode* head;  // sorted by degree (descending)

    ListPoly();
    ~ListPoly(); 
    ListPoly(const ListPoly& o);
    void insert(double coeff, int degree);
    void print(const std::string& name) const;
    double evaluate(double x) const;
};

ListPoly listAdd(const ListPoly& a, const ListPoly& b);
ListPoly listSub(const ListPoly& a, const ListPoly& b);

// 실행 함수
void Problem2();

#endif
