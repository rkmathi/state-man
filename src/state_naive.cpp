#include "state_naive.hpp"

/*!
 * 現在のステートを文字列で返却する。
 * @return 現在のステートの文字列
 */
std::string StateNaive::GetCurrentState() {
  std::stringstream ss;
  ss << "STATE: " << currentState_;
  return ss.str();
}

/*!
 * TODO write docstring
 */
StateNaive StateNaive::GetDamage() {
  std::cout << "StateNaive::GetDamage()" << std::endl;
  switch (currentState_) {
    case STATES::DEAD:
      assert(false);
      break;
    case STATES::MINI:
      return StateNaive(STATES::DEAD);
    case STATES::NORMAL:
      return StateNaive(STATES::MINI);
    case STATES::FIRE:
      return StateNaive(STATES::MINI);
  }
}

/*!
 * TODO write docstring
 */
StateNaive StateNaive::GetMushroom() {
  std::cout << "StateNaive::GetMushroom()" << std::endl;
  switch (currentState_) {
    case STATES::DEAD:
      assert(false);
      break;
    case STATES::MINI:
      return StateNaive(STATES::NORMAL);
    case STATES::NORMAL:
      return StateNaive(STATES::NORMAL);
    case STATES::FIRE:
      return StateNaive(STATES::FIRE);
  }
}

/*!
 * TODO write docstring
 */
StateNaive StateNaive::GetFlower() {
  std::cout << "StateNaive::GetFlower()" << std::endl;
  switch (currentState_) {
    case STATES::DEAD:
      assert(false);
      break;
    case STATES::MINI:
      return StateNaive(STATES::FIRE);
    case STATES::NORMAL:
      return StateNaive(STATES::FIRE);
    case STATES::FIRE:
      return StateNaive(STATES::FIRE);
  }
}

/*!
 * TODO write docstring
 */
StateNaive StateNaive::Fall() {
  std::cout << "StateNaive::Fall()" << std::endl;
  switch (currentState_) {
    case STATES::DEAD:
      assert(false);
      break;
    case STATES::MINI:
      return StateNaive(STATES::DEAD);
    case STATES::NORMAL:
      return StateNaive(STATES::DEAD);
    case STATES::FIRE:
      return StateNaive(STATES::DEAD);
  }
}
