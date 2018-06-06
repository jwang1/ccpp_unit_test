set(Main_SRCS
    main.cpp
)

add_executable(myApp
  ${Main_SRCS}
)


#specify here the libraries this prog depends on
target_link_libraries(myApp
  libfoo
  libbar
)

install(TARGETS myApp DESTINATION bin)