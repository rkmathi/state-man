#ifndef STATE_MAN_CHARACTER_HPP
#define STATE_MAN_CHARACTER_HPP

#include <iostream>
#include "state_naive.hpp"

/*!
 * @brief キャラを表現するクラス
 */
class Character {
 public:
  /*! コンストラクタ */
  Character(std::string name);

  /*! キャラの状態を標準出力に書き出す */
  void PrintStatuses();
  /*! キャラがダメージを受ける */
  void GetDamage();
  /*! キャラがキノコを手に入れる */
  void GetMushroom();
  /*! キャラが花を手に入れる */
  void GetFlower();
  /*! キャラが落下する */
  void Fall();

 private:
  /*! NOTE: 一旦愚直に条件分岐しまくるStateNaiveで書いてみる */
  StateNaive stateMachine_;  //!< ステートマシン
  std::string name_;         //!< 名前
};

#endif  // STATE_MAN_CHARACTER_HPP
