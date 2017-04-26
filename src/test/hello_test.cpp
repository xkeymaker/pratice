/** 
 * @file ver_hello
 * @brief 
 * @author Administrator
 * @date 2017-04-26
 * 
 * $Id$
 */

#include <cppunit/extensions/HelperMacros.h>

#include "unifw.h"

extern "C" 
{
    extern const mod_dscrp_t ver_hello;
}

class test_hello : public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE(test_hello);
    CPPUNIT_TEST(test_hello_ver            );
    CPPUNIT_TEST_SUITE_END();

public:
    test_hello();
    virtual ~test_hello();
    virtual void setUp();
    virtual void tearDown();
    void test_hello_ver ();
};

test_hello::test_hello()
{
}

test_hello::~test_hello()
{
}

void test_hello::setUp()
{
}

void test_hello::tearDown()
{
}

void test_hello::test_hello_ver()
{
    unit_print_module(&ver_hello);
    CPPUNIT_EASSERT(0, ver_hello.major);
    CPPUNIT_EASSERT(1, ver_hello.minor);
    CPPUNIT_EASSERT(0, ver_hello.patch);
}

CPPUNIT_TEST_SUITE_REGISTRATION(test_hello);

