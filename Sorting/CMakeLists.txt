set(PROJECT_NAME Sorting)

################################################################################
# Source groups
################################################################################

set(Header_Files
    "Sorting.h"
    "BubbleSorting.h"
    "InsertionSort.h"
    "OptimizedBubbleSorting.h"
    "MergeSort.h"
    "OutPlaceMergeSort.h"
)
source_group("Header Files" FILES ${Header_Files})


set(Source_Files
    "Sorting.cpp"
    "InsertionSort.cpp"
    "BubbleSorting.cpp"
    "OptimizedBubbleSorting.cpp"
    "MergeSort.cpp"
    "OutPlaceMergeSort.cpp"
)
source_group("Source Files" FILES ${Source_Files})

set(ALL_FILES
    ${Header_Files}
    ${Source_Files}
)

################################################################################
# Target
################################################################################
add_library(${PROJECT_NAME} STATIC ${ALL_FILES})

use_props(${PROJECT_NAME} "${CMAKE_CONFIGURATION_TYPES}" "${DEFAULT_CXX_PROPS}")
set(ROOT_NAMESPACE Algorithms)

set_target_properties(${PROJECT_NAME} PROPERTIES
    INTERPROCEDURAL_OPTIMIZATION_RELEASE "TRUE"
)
################################################################################
# Compile definitions
################################################################################
target_compile_definitions(${PROJECT_NAME} PRIVATE
    "_CRT_SECURE_NO_WARNINGS;"
    "_MBCS"
)

################################################################################
# Compile and link options
################################################################################
#if(MSVC)
#    target_compile_options(${PROJECT_NAME} PRIVATE
 #       $<$<CONFIG:Debug>:
  #          /Od
   #     >
    #    $<$<CONFIG:Release>:
    #        /O2;
    #        /Oi;
    #        /Gy
    #    >
    #    /permissive-;
    #    /std:c++latest;
     #   /sdl;
     #   /W3;
     #   ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
     #   ${DEFAULT_CXX_EXCEPTION_HANDLING}
#    )
 #   target_link_options(${PROJECT_NAME} PRIVATE
  #      $<$<CONFIG:Release>:
   #         /OPT:REF;
    #        /OPT:ICF
     #   >
   # )
#endif()

