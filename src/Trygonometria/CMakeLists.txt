include (GenerateExportHeader)
include_directories("${CMAKE_BINARY_DIR}/Trygonometria")
add_library(Trygonometria SHARED trygonometria.cpp)
GENERATE_EXPORT_HEADER( Trygonometria
BASE_NAME Trygonometria
EXPORT_MACRO_NAME Trygonometria_EXPORT
EXPORT_FILE_NAME Trygonometria_Export.h
STATIC_DEFINE Trygonometria_BUILT_AS_STATIC
)