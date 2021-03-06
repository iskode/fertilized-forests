
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */

#pragma once
#ifndef PYFERTILIZED_EXPORTERS___TWOSIDECLASSIFICATIONTHRESHOLDOPTIMIZER_EXPORTER_H_
#define PYFERTILIZED_EXPORTERS___TWOSIDECLASSIFICATIONTHRESHOLDOPTIMIZER_EXPORTER_H_

#include "../global.h"

#pragma warning(push, 0)
#include <fertilized/ndarray/bp/auto.h>
#pragma warning(pop)
#ifdef SERIALIZATION_ENABLED
#include <boost/serialization/serialization.hpp>
#endif

#include "../util.h"
#include "../serialization.h"

#include <fertilized/threshold_optimizers/twosideclassificationthresholdoptimizer.h>
namespace py = boost::python;
using namespace fertilized;

namespace pyfertilized {
#ifdef SERIALIZATION_ENABLED
  template <typename input_dtype,typename feature_dtype,typename annotation_dtype>
  std::shared_ptr<TwoSideClassificationThresholdOptimizer<input_dtype,feature_dtype,annotation_dtype>> __construct_TwoSideClassificationThresholdOptimizer() {
    auto *ptr = (TwoSideClassificationThresholdOptimizer<input_dtype,feature_dtype,annotation_dtype>*) malloc(sizeof(TwoSideClassificationThresholdOptimizer<input_dtype,feature_dtype,annotation_dtype>));
    boost::serialization::access::construct(ptr);
    return std::shared_ptr<TwoSideClassificationThresholdOptimizer<input_dtype,feature_dtype,annotation_dtype>>(ptr, free);
  };
#endif
  template <typename input_dtype,typename feature_dtype,typename annotation_dtype>
  void export_TwoSideClassificationThresholdOptimizer(const std::string &type_short) {
    // Explicit function pointers and overloads.
    bool (fertilized::TwoSideClassificationThresholdOptimizer<input_dtype,feature_dtype,annotation_dtype>::*ptr_TwoSideClassificationThresholdOptimizer_0)
    (

        const fertilized::IThresholdOptimizer<input_dtype, feature_dtype, annotation_dtype> &
) const =
      &fertilized::TwoSideClassificationThresholdOptimizer<input_dtype,feature_dtype,annotation_dtype>::operator==;
    bool (*ptr_TwoSideClassificationThresholdOptimizer_1)
    (

        const fertilized::IThresholdOptimizer<input_dtype, feature_dtype, annotation_dtype> &
,
     

        const fertilized::IThresholdOptimizer<input_dtype, feature_dtype, annotation_dtype> &
) =
    &ne_from_eq<fertilized::IThresholdOptimizer<input_dtype, feature_dtype, annotation_dtype>>;
    py::class_<TwoSideClassificationThresholdOptimizer<input_dtype,feature_dtype,annotation_dtype>,
               std::shared_ptr<TwoSideClassificationThresholdOptimizer<input_dtype,feature_dtype,annotation_dtype>>,
               boost::noncopyable,
               py::bases<IThresholdOptimizer<input_dtype, feature_dtype, annotation_dtype> >>
               (("TwoSideClassificationThresholdOptimizer" + type_short).c_str(),
                "Optimizes two sided classifcation thresholds very efficiently.\n\
\n\
Supports only classification annotations (unsigned int) with annotation\n\
values in {0, ..., n_classes - 1}.\n\
\n\
\n\
-----\n\
\n\
Available in:\n\
\n\
- C++\n\
- Python\n\
- Matlab\n\
\n\
Instantiations:\n\
\n\
- int; int; uint\n\
- int; float; uint\n\
- float; int; uint\n\
- uint8_t; int; uint\n\
- uint8_t; uint8_t; uint\n\
- uint8_t; float; uint\n\
- uint8_t; int16_t; uint\n\
- float; float; uint\n\
- double; double; uint\n\
- uint8_t; int16_t; int16_t\n\
\n\
\n\
-----\n\
",
                 py::init<

        const bool &,
        const size_t &,
        const std::shared_ptr<fertilized::IGainCalculator<float> > &,
        py::optional<const float &,
        const size_t>
                         >())
#ifdef SERIALIZATION_ENABLED
    // Pickle support constructor.
    .def("__init__", py::make_constructor(__construct_TwoSideClassificationThresholdOptimizer<input_dtype,feature_dtype,annotation_dtype>))
    .def_pickle(ParameterlessPickleSuite<TwoSideClassificationThresholdOptimizer<input_dtype,feature_dtype,annotation_dtype>>())
#endif
    .def("__eq__", ptr_TwoSideClassificationThresholdOptimizer_0, "-----\n\
\n\
Available in:\n\
\n\
- C++\n\
- Python\n\
- Matlab\n\
\n\
\n\
-----\n\
")
    .def("__ne__", ptr_TwoSideClassificationThresholdOptimizer_1, "")
    ;

    py::implicitly_convertible<std::shared_ptr<TwoSideClassificationThresholdOptimizer<input_dtype,feature_dtype,annotation_dtype>>,
                               std::shared_ptr<IThresholdOptimizer<input_dtype, feature_dtype, annotation_dtype> > >();
  };
}  // namespace fertilized

#endif  // PYFERTILIZED_EXPORTERS___TWOSIDECLASSIFICATIONTHRESHOLDOPTIMIZER_EXPORTER_H_