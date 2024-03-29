﻿#include "test_runner.h"

//----------------------------------------------------------------------------------------------------
void Assert(bool b, const std::string& hint)
{
    AssertEqual(b, true, hint);
}
//----------------------------------------------------------------------------------------------------
TestRunner::~TestRunner()
{
    if (fail_count > 0)
    {
        std::cerr << "========================================" << std::endl;
        std::cerr << "FAILED (failures = " << fail_count << ")" << std::endl;
        std::cerr << "========================================" << std::endl;
        exit(1);
    }
    else
    {
        std::cerr << "========================================" << std::endl;
        std::cerr << "OK" << std::endl;
        std::cerr << "========================================" << std::endl;
    }
}