/* -*- c++ -*- */
/*
 * Copyright 2025 Derek Kozel
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */


#include "vector_slice_impl.h"
#include <gnuradio/io_signature.h>

namespace gr {
namespace blocks {

using item_type = gr_complex;

vector_slice::sptr vector_slice::make(size_t input_vlen,
                                      size_t output_vlen,
                                      size_t start_index)
{
    return gnuradio::make_block_sptr<vector_slice_impl>(
        input_vlen, output_vlen, start_index);
}

vector_slice_impl::vector_slice_impl(size_t input_vlen,
                                     size_t output_vlen,
                                     size_t start_index)
    : sync_block("vector slice",
                 io_signature::make(1, 1, sizeof(item_type)),
                 io_signature::make(0, 1, sizeof(item_type))
    ),
      d_input_vlen(input_vlen),
      d_output_vlen(output_vlen),
      d_start_index(start_index)
{}

vector_slice_impl::~vector_slice_impl() {}

int vector_slice_impl::work(int noutput_items,
                        gr_vector_const_void_star& input_items,
                        gr_vector_void_star& output_items)
{
    auto in = static_cast<const item_type*>(input_items[0]);
    auto out = static_cast<item_type*>(output_items[0]);

    for (int i = 0; i < noutput_items; i++) {
        out[i] = in[i]
    }

    return noutput_items;
}

} /* namespace blocks */
} /* namespace gr */
