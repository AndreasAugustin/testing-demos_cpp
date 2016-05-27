/**
 * @author andy
 * @copyright (c) 2016 andy. All rights reserved.
 */

#include <gmock/gmock.h>

#include <calculator/calculator.h>

namespace testing_demos_cpp {

namespace unittest {

using ::testing::Eq;

TEST(CalculatorFixture, ordinary_Test) {

  Calculator< double > calculator;
  const double one = 1;
  const double two = 2;
  auto res = calculator.add(one, two);

  ASSERT_THAT(res, Eq(3));
}

/*class CalculatorFixture : public ::testing::Test {
 public:
  Calculator< double > m_calculator;
};

TEST_F(CalculatorFixture, test_with_given_Fixture) {
  auto res = m_calculator.add(1, 2);

  ASSERT_THAT(res, Eq(3));
}*/

} /* namespace unittest */

} /* namespace testing_demos_cpp */
