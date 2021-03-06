/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/vocoder/g723_40_encode_sb.h>
// pydoc.h is automatically generated in the build directory
#include <g723_40_encode_sb_pydoc.h>

void bind_g723_40_encode_sb(py::module& m)
{

    using g723_40_encode_sb = ::gr::vocoder::g723_40_encode_sb;


    py::class_<g723_40_encode_sb,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<g723_40_encode_sb>>(
        m, "g723_40_encode_sb", D(g723_40_encode_sb))

        .def(py::init(&g723_40_encode_sb::make), D(g723_40_encode_sb, make))


        ;
}
