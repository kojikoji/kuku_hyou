#include<kuku_vec.h>
#include <cppunit/extensions/HelperMacros.h>
class Kuku_vec_test : public CPPUNIT_NS::TestFixture{
  CPPUNIT_TEST_SUITE( Kuku_vec_test );
  CPPUNIT_TEST(test_constructer);
  CPPUNIT_TEST(test_str);
  CPPUNIT_TEST_SUITE_END();
protected:
  Kuku_vec* kvptr;
public:
  void setUp();
  void tearDown();
protected:
  void test_constructer();
  void test_str();
};
CPPUNIT_TEST_SUITE_REGISTRATION(Kuku_vec_test);
//オブジェクトの取得
void Kuku_vec_test::setUp(){}
void Kuku_vec_test::tearDown(){}

  
void Kuku_vec_test::test_constructer(){
  Kuku_vec kvec;
  //CPPUNIT_ASSERT_EQUAL(1,kvec.begin()->begin());
  //CPPUNIT_ASSERT_EQUAL(81,);
  CPPUNIT_ASSERT_EQUAL(9,(int)kvec.size());
}
void Kuku_vec_test::test_str(){
  Kuku_vec kvec;
  CPPUNIT_ASSERT_EQUAL(81*3+9,(int)kvec.str().size());
  Kuku_vec kvecp(true);
  CPPUNIT_ASSERT_EQUAL(81*3+9,(int)kvecp.str().size());
}
