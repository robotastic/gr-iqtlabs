/*
 * Copyright 2024 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(vkfft_short.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(4b3ec6521d795ce0bd089acb1c0c56de)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/iqtlabs/vkfft_short.h>
// pydoc.h is automatically generated in the build directory
#include <vkfft_short_pydoc.h>

void bind_vkfft_short(py::module& m)
{

    using vkfft_short = ::gr::iqtlabs::vkfft_short;


    py::class_<vkfft_short,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<vkfft_short>>(m, "vkfft_short", D(vkfft_short))

        .def(py::init(&vkfft_short::make),
             py::arg("fft_batch_size"),
             py::arg("nfft"),
             py::arg("shift"),
             D(vkfft_short, make))


        ;
}
