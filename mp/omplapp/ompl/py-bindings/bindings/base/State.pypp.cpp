// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "State.pypp.hpp"

namespace bp = boost::python;

double __getitem(::ompl::base::ScopedState<ompl::base::StateSpace>* obj, unsigned int i)
{
    return (*obj)[i];
}

void __setitem(::ompl::base::ScopedState<ompl::base::StateSpace>* obj, unsigned int i, double val)
{
    (*obj)[i] = val;
}

std::string __str__(::ompl::base::ScopedState<ompl::base::StateSpace>* obj)
{
    std::ostringstream s;
    obj->print(s);
    return s.str();
}

void register_State_class(){

    { //::ompl::base::ScopedState< ompl::base::StateSpace >
        typedef bp::class_< ompl::base::ScopedState< ompl::base::StateSpace > > State_exposer_t;
        State_exposer_t State_exposer = State_exposer_t( "State", bp::init< boost::shared_ptr< ompl::base::SpaceInformation > const & >(( bp::arg("si") )) );
        bp::scope State_scope( State_exposer );
        bp::implicitly_convertible< boost::shared_ptr< ompl::base::SpaceInformation > const &, ompl::base::ScopedState< ompl::base::StateSpace > >();
        State_exposer.def( bp::init< boost::shared_ptr< ompl::base::StateSpace > const & >(( bp::arg("space") )) );
        bp::implicitly_convertible< boost::shared_ptr< ompl::base::StateSpace > const &, ompl::base::ScopedState< ompl::base::StateSpace > >();
        State_exposer.def( bp::init< ompl::base::ScopedState< ompl::base::StateSpace > const & >(( bp::arg("other") )) );
        State_exposer.def( bp::init< boost::shared_ptr< ompl::base::StateSpace > const &, ompl::base::State const * >(( bp::arg("space"), bp::arg("state") )) );
        { //::ompl::base::ScopedState< ompl::base::StateSpace >::distance
        
            typedef ompl::base::ScopedState< ompl::base::StateSpace > exported_class_t;
            typedef double ( exported_class_t::*distance_function_type)( ::ompl::base::State const * ) const;
            
            State_exposer.def( 
                "distance"
                , distance_function_type( &::ompl::base::ScopedState< ompl::base::StateSpace >::distance )
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::base::ScopedState< ompl::base::StateSpace >::enforceBounds
        
            typedef ompl::base::ScopedState< ompl::base::StateSpace > exported_class_t;
            typedef void ( exported_class_t::*enforceBounds_function_type)(  ) ;
            
            State_exposer.def( 
                "enforceBounds"
                , enforceBounds_function_type( &::ompl::base::ScopedState< ompl::base::StateSpace >::enforceBounds ) );
        
        }
        { //::ompl::base::ScopedState< ompl::base::StateSpace >::get
        
            typedef ompl::base::ScopedState< ompl::base::StateSpace > exported_class_t;
            typedef ::ompl::base::State * ( exported_class_t::*get_function_type)(  ) ;
            
            State_exposer.def( 
                "get"
                , get_function_type( &::ompl::base::ScopedState< ompl::base::StateSpace >::get )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::StateSpace >::get
        
            typedef ompl::base::ScopedState< ompl::base::StateSpace > exported_class_t;
            typedef ::ompl::base::State const * ( exported_class_t::*get_function_type)(  ) const;
            
            State_exposer.def( 
                "get"
                , get_function_type( &::ompl::base::ScopedState< ompl::base::StateSpace >::get )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::StateSpace >::getSpace
        
            typedef ompl::base::ScopedState< ompl::base::StateSpace > exported_class_t;
            typedef ::boost::shared_ptr< ompl::base::StateSpace > const & ( exported_class_t::*getSpace_function_type)(  ) const;
            
            State_exposer.def( 
                "getSpace"
                , getSpace_function_type( &::ompl::base::ScopedState< ompl::base::StateSpace >::getSpace )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::StateSpace >::operator()
        
            typedef ompl::base::ScopedState< ompl::base::StateSpace > exported_class_t;
            typedef ::ompl::base::State * ( exported_class_t::*__call___function_type)(  ) const;
            
            State_exposer.def( 
                "__call__"
                , __call___function_type( &::ompl::base::ScopedState< ompl::base::StateSpace >::operator() )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::StateSpace >::operator=
        
            typedef ompl::base::ScopedState< ompl::base::StateSpace > exported_class_t;
            typedef ::ompl::base::ScopedState< ompl::base::StateSpace > & ( exported_class_t::*assign_function_type)( ::ompl::base::ScopedState< ompl::base::StateSpace > const & ) ;
            
            State_exposer.def( 
                "assign"
                , assign_function_type( &::ompl::base::ScopedState< ompl::base::StateSpace >::operator= )
                , ( bp::arg("other") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::StateSpace >::operator=
        
            typedef ompl::base::ScopedState< ompl::base::StateSpace > exported_class_t;
            typedef ::ompl::base::ScopedState< ompl::base::StateSpace > & ( exported_class_t::*assign_function_type)( ::ompl::base::State const * ) ;
            
            State_exposer.def( 
                "assign"
                , assign_function_type( &::ompl::base::ScopedState< ompl::base::StateSpace >::operator= )
                , ( bp::arg("other") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::StateSpace >::operator=
        
            typedef ompl::base::ScopedState< ompl::base::StateSpace > exported_class_t;
            typedef ::ompl::base::ScopedState< ompl::base::StateSpace > & ( exported_class_t::*assign_function_type)( ::std::vector< double > const & ) ;
            
            State_exposer.def( 
                "assign"
                , assign_function_type( &::ompl::base::ScopedState< ompl::base::StateSpace >::operator= )
                , ( bp::arg("reals") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::StateSpace >::operator=
        
            typedef ompl::base::ScopedState< ompl::base::StateSpace > exported_class_t;
            typedef ::ompl::base::ScopedState< ompl::base::StateSpace > & ( exported_class_t::*assign_function_type)( double const ) ;
            
            State_exposer.def( 
                "assign"
                , assign_function_type( &::ompl::base::ScopedState< ompl::base::StateSpace >::operator= )
                , ( bp::arg("value") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::StateSpace >::random
        
            typedef ompl::base::ScopedState< ompl::base::StateSpace > exported_class_t;
            typedef void ( exported_class_t::*random_function_type)(  ) ;
            
            State_exposer.def( 
                "random"
                , random_function_type( &::ompl::base::ScopedState< ompl::base::StateSpace >::random ) );
        
        }
        { //::ompl::base::ScopedState< ompl::base::StateSpace >::reals
        
            typedef ompl::base::ScopedState< ompl::base::StateSpace > exported_class_t;
            typedef ::std::vector< double > ( exported_class_t::*reals_function_type)(  ) const;
            
            State_exposer.def( 
                "reals"
                , reals_function_type( &::ompl::base::ScopedState< ompl::base::StateSpace >::reals ) );
        
        }
        { //::ompl::base::ScopedState< ompl::base::StateSpace >::satisfiesBounds
        
            typedef ompl::base::ScopedState< ompl::base::StateSpace > exported_class_t;
            typedef bool ( exported_class_t::*satisfiesBounds_function_type)(  ) const;
            
            State_exposer.def( 
                "satisfiesBounds"
                , satisfiesBounds_function_type( &::ompl::base::ScopedState< ompl::base::StateSpace >::satisfiesBounds ) );
        
        }
        State_exposer.def("__getitem__", &__getitem);
        State_exposer.def("__setitem__", &__setitem);
        State_exposer.def(bp::init<ompl::base::ScopedState<ompl::base::CompoundStateSpace> const &>(( bp::arg("other") )));
        State_exposer.def(bp::init<ompl::base::ScopedState<ompl::base::RealVectorStateSpace> const &>(( bp::arg("other") )));
        State_exposer.def(bp::init<ompl::base::ScopedState<ompl::base::SO2StateSpace> const &>(( bp::arg("other") )));
        State_exposer.def(bp::init<ompl::base::ScopedState<ompl::base::SO3StateSpace> const &>(( bp::arg("other") )));
        State_exposer.def(bp::init<ompl::base::ScopedState<ompl::base::SE2StateSpace> const &>(( bp::arg("other") )));
        State_exposer.def(bp::init<ompl::base::ScopedState<ompl::base::SE3StateSpace> const &>(( bp::arg("other") )));
        State_exposer.def(bp::init<ompl::base::ScopedState<ompl::base::DiscreteStateSpace> const &>(( bp::arg("other") )));
        State_exposer.def(bp::init<ompl::base::ScopedState<ompl::base::TimeStateSpace> const &>(( bp::arg("other") )));
        State_exposer.def(bp::init<ompl::base::ScopedState<ompl::base::DubinsStateSpace> const &>(( bp::arg("other") )));
        State_exposer.def(bp::init<ompl::base::ScopedState<ompl::base::ReedsSheppStateSpace> const &>(( bp::arg("other") )));
        State_exposer.def("__str__", &__str__);
    }

}
