set(target luhn)
add_library(${target} STATIC
  ${PROJECT_SOURCE_DIR}/src/luhn.cpp
)
install(TARGETS ${target} DESTINATION lib)
