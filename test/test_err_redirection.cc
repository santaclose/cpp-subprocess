#include <iostream>
#include "../subprocess.hpp"

using namespace subprocess;

void test_redirect()
{
  auto p = Popen("./write_err.sh", output{"write_err.txt"}, error{STDOUT});
  assert (p.poll() == 0);

}

int main() {
  test_redirect();
  return 0;
}