#include <luhn>
int _Volumes_build_luhn_test_luhn(int, char*[]) noexcept
{
  std::vector<int> v{7, 9, 9, 2, 7, 3, 9, 8, 7, 1};
  if (const auto o{tregana::luhn_value<int>(v)}; o != 3)
    return 1;
  return 0;
}
