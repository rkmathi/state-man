#ifndef STATE_MAN_STATE_MACHINE_HPP
#define STATE_MAN_STATE_MACHINE_HPP

#include <cassert>
#include <iostream>
#include <sstream>
#include "states.hpp"

/*!
 * @brief 愚直なステートマシン(?)を表現するクラス
 */
class StateNaive {
 public:
  /*! ステートを指定したコンストラクタ */
  StateNaive(STATES initializeState) : currentState_(initializeState) {}

  /*! 現在のステートを文字列で返却 */
  std::string GetCurrentState();
  /*! キャラがダメージを受ける */
  StateNaive GetDamage();
  /*! キャラがキノコを手に入れる */
  StateNaive GetMushroom();
  /*! キャラが花を手に入れる */
  StateNaive GetFlower();
  /*! キャラが落下する */
  StateNaive Fall();

 private:
  STATES currentState_;  //!< 現在のステート
};

#endif  // STATE_MAN_STATE_MACHINE_HPP
