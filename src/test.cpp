#include <iostream>
#include "impl/Kokkos_Profiling.hpp"
int main(int argc, char* argv[]){
  std::cout << "Line 1\n";
  Kokkos::Tools::initialize(argc, argv);
  std::cout << "Line 2\n";
  Kokkos::Tools::pushRegion("dogs");
  std::cout << "Line 3\n";
  Kokkos::Tools::popRegion();
  std::cout << "Line 4\n";
  Kokkos::Tools::finalize();
}
