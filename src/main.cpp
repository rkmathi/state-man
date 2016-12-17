#include "main.hpp"

/*!
 * メイン
 */
int main() {
  std::cout << "state-man" << std::endl;

  // CharaAというキャラクターを生成する (MINI)
  Character ca("CharaA");
  ca.PrintStatuses();

  // CharaAがフラワーを取得する (MINI => FLOWER)
  ca.GetFlower();
  ca.PrintStatuses();

  // CharaAがダメージを受ける (FLOWER => MINI)
  ca.GetDamage();
  ca.PrintStatuses();

  // CharaAがキノコを取得する (MINI => NORMAL)
  ca.GetMushroom();
  ca.PrintStatuses();

  // CharaAが落下する (NORMAL => DEAD)
  ca.Fall();
  ca.PrintStatuses();

  return 0;
}
