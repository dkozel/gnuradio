/* -*- c++ -*- */
/*
 * Copyright 2025 Derek Kozel
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#ifndef INCLUDED_GR_VECTOR_SLICE_IMPL_H
#define INCLUDED_GR_VECTOR_SLICE_IMPL_H

#include <gnuradio/blocks/vector_slice.h>

namespace gr {
namespace blocks {

class vector_slice_impl : public vector_slice
{
private:
    const size_t d_input_vlen;
    const size_t d_output_vlen;
    const size_t d_start_index;

public:
    vector_slice_impl(size_t input_vlen, size_t output_vlen, size_t start_index);
    ~vector_slice_impl() override;

    int work(int noutput_items,
             gr_vector_const_void_star& input_items,
             gr_vector_void_star& output_items) override;
};

} /* namespace blocks */
} /* namespace gr */

#endif /* INCLUDED_GR_VECTOR_SLICE_IMPL_H */
