// This file has been generated by Py++.

#include "boost/python.hpp"
#include "bindings/base.h"
#include "DiscreteState.pypp.hpp"

namespace bp = boost::python;

double __getitem(::ompl::base::ScopedState<ompl::base::DiscreteStateSpace>* obj, unsigned int i)
{
    return (*obj)[i];
}

void __setitem(::ompl::base::ScopedState<ompl::base::DiscreteStateSpace>* obj, unsigned int i, double val)
{
    (*obj)[i] = val;
}

std::string __str__(::ompl::base::ScopedState<ompl::base::DiscreteStateSpace>* obj)
{
    std::ostringstream s;
    obj->print(s);
    return s.str();
}

void register_DiscreteState_class(){

    { //::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >
        typedef bp::class_< ompl::base::ScopedState< ompl::base::DiscreteStateSpace > > DiscreteState_exposer_t;
        DiscreteState_exposer_t DiscreteState_exposer = DiscreteState_exposer_t( "DiscreteState", bp::init< boost::shared_ptr< ompl::base::SpaceInformation > const & >(( bp::arg("si") )) );
        bp::scope DiscreteState_scope( DiscreteState_exposer );
        bp::implicitly_convertible< boost::shared_ptr< ompl::base::SpaceInformation > const &, ompl::base::ScopedState< ompl::base::DiscreteStateSpace > >();
        DiscreteState_exposer.def( bp::init< boost::shared_ptr< ompl::base::StateSpace > const & >(( bp::arg("space") )) );
        bp::implicitly_convertible< boost::shared_ptr< ompl::base::StateSpace > const &, ompl::base::ScopedState< ompl::base::DiscreteStateSpace > >();
        DiscreteState_exposer.def( bp::init< ompl::base::ScopedState< ompl::base::DiscreteStateSpace > const & >(( bp::arg("other") )) );
        DiscreteState_exposer.def( bp::init< boost::shared_ptr< ompl::base::StateSpace > const &, ompl::base::State const * >(( bp::arg("space"), bp::arg("state") )) );
        { //::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::distance
        
            typedef ompl::base::ScopedState< ompl::base::DiscreteStateSpace > exported_class_t;
            typedef double ( exported_class_t::*distance_function_type)( ::ompl::base::State const * ) const;
            
            DiscreteState_exposer.def( 
                "distance"
                , distance_function_type( &::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::distance )
                , ( bp::arg("state") ) );
        
        }
        { //::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::enforceBounds
        
            typedef ompl::base::ScopedState< ompl::base::DiscreteStateSpace > exported_class_t;
            typedef void ( exported_class_t::*enforceBounds_function_type)(  ) ;
            
            DiscreteState_exposer.def( 
                "enforceBounds"
                , enforceBounds_function_type( &::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::enforceBounds ) );
        
        }
        { //::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::get
        
            typedef ompl::base::ScopedState< ompl::base::DiscreteStateSpace > exported_class_t;
            typedef ::ompl::base::DiscreteStateSpace::StateType * ( exported_class_t::*get_function_type)(  ) ;
            
            DiscreteState_exposer.def( 
                "get"
                , get_function_type( &::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::get )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::get
        
            typedef ompl::base::ScopedState< ompl::base::DiscreteStateSpace > exported_class_t;
            typedef ::ompl::base::DiscreteStateSpace::StateType const * ( exported_class_t::*get_function_type)(  ) const;
            
            DiscreteState_exposer.def( 
                "get"
                , get_function_type( &::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::get )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::getSpace
        
            typedef ompl::base::ScopedState< ompl::base::DiscreteStateSpace > exported_class_t;
            typedef ::boost::shared_ptr< ompl::base::StateSpace > const & ( exported_class_t::*getSpace_function_type)(  ) const;
            
            DiscreteState_exposer.def( 
                "getSpace"
                , getSpace_function_type( &::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::getSpace )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::operator()
        
            typedef ompl::base::ScopedState< ompl::base::DiscreteStateSpace > exported_class_t;
            typedef ::ompl::base::DiscreteStateSpace::StateType * ( exported_class_t::*__call___function_type)(  ) const;
            
            DiscreteState_exposer.def( 
                "__call__"
                , __call___function_type( &::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::operator() )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::operator=
        
            typedef ompl::base::ScopedState< ompl::base::DiscreteStateSpace > exported_class_t;
            typedef ::ompl::base::ScopedState< ompl::base::DiscreteStateSpace > & ( exported_class_t::*assign_function_type)( ::ompl::base::ScopedState< ompl::base::DiscreteStateSpace > const & ) ;
            
            DiscreteState_exposer.def( 
                "assign"
                , assign_function_type( &::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::operator= )
                , ( bp::arg("other") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::operator=
        
            typedef ompl::base::ScopedState< ompl::base::DiscreteStateSpace > exported_class_t;
            typedef ::ompl::base::ScopedState< ompl::base::DiscreteStateSpace > & ( exported_class_t::*assign_function_type)( ::ompl::base::State const * ) ;
            
            DiscreteState_exposer.def( 
                "assign"
                , assign_function_type( &::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::operator= )
                , ( bp::arg("other") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::operator=
        
            typedef ompl::base::ScopedState< ompl::base::DiscreteStateSpace > exported_class_t;
            typedef ::ompl::base::ScopedState< ompl::base::DiscreteStateSpace > & ( exported_class_t::*assign_function_type)( ::std::vector< double > const & ) ;
            
            DiscreteState_exposer.def( 
                "assign"
                , assign_function_type( &::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::operator= )
                , ( bp::arg("reals") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::operator=
        
            typedef ompl::base::ScopedState< ompl::base::DiscreteStateSpace > exported_class_t;
            typedef ::ompl::base::ScopedState< ompl::base::DiscreteStateSpace > & ( exported_class_t::*assign_function_type)( double const ) ;
            
            DiscreteState_exposer.def( 
                "assign"
                , assign_function_type( &::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::operator= )
                , ( bp::arg("value") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::random
        
            typedef ompl::base::ScopedState< ompl::base::DiscreteStateSpace > exported_class_t;
            typedef void ( exported_class_t::*random_function_type)(  ) ;
            
            DiscreteState_exposer.def( 
                "random"
                , random_function_type( &::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::random ) );
        
        }
        { //::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::reals
        
            typedef ompl::base::ScopedState< ompl::base::DiscreteStateSpace > exported_class_t;
            typedef ::std::vector< double > ( exported_class_t::*reals_function_type)(  ) const;
            
            DiscreteState_exposer.def( 
                "reals"
                , reals_function_type( &::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::reals ) );
        
        }
        { //::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::satisfiesBounds
        
            typedef ompl::base::ScopedState< ompl::base::DiscreteStateSpace > exported_class_t;
            typedef bool ( exported_class_t::*satisfiesBounds_function_type)(  ) const;
            
            DiscreteState_exposer.def( 
                "satisfiesBounds"
                , satisfiesBounds_function_type( &::ompl::base::ScopedState< ompl::base::DiscreteStateSpace >::satisfiesBounds ) );
        
        }
        DiscreteState_exposer.def(bp::init<ompl::base::ScopedState<ompl::base::StateSpace> const &>(( bp::arg("other") )));
        DiscreteState_exposer.def("__getitem__", &__getitem);
        DiscreteState_exposer.def("__setitem__", &__setitem);
        DiscreteState_exposer.def("__str__", &__str__);
    }

}
