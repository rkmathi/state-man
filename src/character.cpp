#include "character.hpp"

/*!
 * @brief コンストラクタ (初期ステートはMINI)
 */
Character::Character(std::string name) :
    stateMachine_(STATES::MINI),
    name_(name)
{}


/*!
 * @brief キャラのname, stateを標準出力に書き出す。
 */
void Character::PrintStatuses() {
  std::cout << "Character::PrintStatuses()" << std::endl
            << "| name:   " << name_ << std::endl
            << "| state:  " << stateMachine_.GetCurrentState() << std::endl;
}

/*!
 * @brief キャラがダメージを受けた時の処理
 */
void Character::GetDamage() {
  std::cout << "Character::GetDamage()" << std::endl;
  stateMachine_ = stateMachine_.GetDamage();
}

/*!
 * @brief TODO write docstring
 */
void Character::GetMushroom() {
  std::cout << "Character::GetMushroom()" << std::endl;
  stateMachine_ = stateMachine_.GetMushroom();
}

/*!
 * @brief TODO write docstring
 */
void Character::GetFlower() {
  std::cout << "Character::GetFlower()" << std::endl;
  stateMachine_ = stateMachine_.GetFlower();
}

/*!
 * @brief TODO write docstring
 */
void Character::Fall() {
  std::cout << "Character::Fall()" << std::endl;
  stateMachine_ = stateMachine_.Fall();
}
