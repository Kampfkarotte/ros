// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/tools.h"
#include "_tools_global_variables.pypp.hpp"

namespace bp = boost::python;

void register_global_variables(){

    bp::scope().attr("BETTER_PATH_COST_MARGIN") = ompl::magic::BETTER_PATH_COST_MARGIN;

    bp::scope().attr("COST_MAX_MOTION_LENGTH_AS_SPACE_EXTENT_FRACTION") = ompl::magic::COST_MAX_MOTION_LENGTH_AS_SPACE_EXTENT_FRACTION;

    bp::scope().attr("FIND_VALID_STATE_ATTEMPTS_WITHOUT_TERMINATION_CHECK") = ompl::magic::FIND_VALID_STATE_ATTEMPTS_WITHOUT_TERMINATION_CHECK;

    bp::scope().attr("MAX_MOTION_LENGTH_AS_SPACE_EXTENT_FRACTION") = ompl::magic::MAX_MOTION_LENGTH_AS_SPACE_EXTENT_FRACTION;

    bp::scope().attr("MAX_VALID_SAMPLE_ATTEMPTS") = ompl::magic::MAX_VALID_SAMPLE_ATTEMPTS;

    bp::scope().attr("PROJECTION_DIMENSION_SPLITS") = ompl::magic::PROJECTION_DIMENSION_SPLITS;

    bp::scope().attr("PROJECTION_EXPAND_FACTOR") = ompl::magic::PROJECTION_EXPAND_FACTOR;

    bp::scope().attr("PROJECTION_EXTENTS_SAMPLES") = ompl::magic::PROJECTION_EXTENTS_SAMPLES;

    bp::scope().attr("STD_DEV_AS_SPACE_EXTENT_FRACTION") = ompl::magic::STD_DEV_AS_SPACE_EXTENT_FRACTION;

    bp::scope().attr("TEST_STATE_COUNT") = ompl::magic::TEST_STATE_COUNT;

}
