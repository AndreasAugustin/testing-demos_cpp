/**
 * @author andy
 * @copyright (c) 2016 andy. All rights reserved.
 */

#ifndef SRC_INCLUDE_CALCULATOR_CALCULATOR_H_
#define SRC_INCLUDE_CALCULATOR_CALCULATOR_H_

namespace testing_demos_cpp {

/**@class Calculator
 *
 * @brief ordinary calculator
 *        The template needs to have the calculation operators implemented
 */
template < typename T>
class Calculator {
 public:
  /**@brief adds two summands
   *
   * @param[in] summand1
   * @param[in] summand2
   *
   * @return summand1 + summand2
   */
  T add(const T &summand1, const T &summand2) const {
      return summand1 + summand2;
    }
};

} /* namespace testing_demos_cpp */

#endif  // SRC_INCLUDE_CALCULATOR_CALCULATOR_H_
