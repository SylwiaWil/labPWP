# CMake generated Testfile for 
# Source directory: C:/Users/student/labPWP/src
# Build directory: C:/Users/student/labPWP/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(LaborkaPodstawowyTest "Laborka")
add_test(LaborkaWynikSin45 "Laborka" "45")
set_tests_properties(LaborkaWynikSin45 PROPERTIES  PASS_REGULAR_EXPRESSION "0[.,]7071")
add_test(Laborka3sek "Laborka")
set_tests_properties(Laborka3sek PROPERTIES  TIMEOUT "3")
subdirs(Trygonometria)
