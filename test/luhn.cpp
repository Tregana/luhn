#include <luhn>
#include <iostream>
int _Volumes_build_luhn_test_luhn(int, char*[]) noexcept
{
  std::string s{"7992739871"};
  auto u{tregana::luhn_stv<tregana::check::on>(s)};
  if (const auto o{tregana::luhn_value<int>(*u)}; o != 3)
    return 1;
  std::vector<int> v{7, 9, 9, 2, 7, 3, 9, 8, 7, 1};
  if (const auto o{tregana::luhn_value<int>(v)}; o != 3)
    return 1;
  if (not std::equal(u->begin(), u->end(), v.begin()))
    return 1;
  return 0;
}
