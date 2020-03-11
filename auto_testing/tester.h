#ifndef TESTER_H
#define TESTER_H

#include <vector>
#include <string>

class Tester {
    int error_count;
    int total_count;
    bool equals(double d1, double d2, double tolerance) const;
    void print_vector(const std::vector<int>& a);
public:
    Tester();

    // Determines if an expected integer result (expected)
    // matches the actual result (actual). msg is the message
    // that describes the test.
    void check_equals(
        const std::string& msg,
        int expected,
        int actual
    );

    // Determines if an expected double result (expected)
    // matches the actual result (actual) or they differ by at
    // most tolerance. msg is the message that describes the test.    
    void check_equals(
        const std::string& msg, 
        double expected,
        double actual,
        double tolerance
    );

    // Determines if an expected string result (expected)
    // matches the actual result (actual). msg is the message
    // that describes the test.
    void check_equals(
        const std::string& msg,
        const std::vector<int>& expected,
        const std::vector<int>& actual
    );

    void report_results() const;
};

#endif
