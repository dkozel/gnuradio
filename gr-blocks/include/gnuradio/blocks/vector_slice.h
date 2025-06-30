/* -*- c++ -*- */
/*
 * Copyright 2025 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#ifndef INCLUDED_BLOCKS_VECTOR_SLICE_H
#define INCLUDED_BLOCKS_VECTOR_SLICE_H

#include <gnuradio/blocks/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
namespace blocks {

/*!
 * \brief slice a subsection of a vector
 */
class BLOCKS_API vector_slice : virtual public sync_block
{
public:
    // gr::blocks::vector_slice::sptr
    typedef std::shared_ptr<vector_slice> sptr;

    /*!
     * Make vector-slice block
     *
     * \param input_vlen number of items per input vector (vector size)
     * \param output_vlen number of items per output vector (vector size)
     * \param start_index index of the first item in the output vector
     */
    static sptr make(size_t input_vlen, size_t output_vlen, size_t start_index);
};

} /* namespace blocks */
} /* namespace gr */

#endif /* INCLUDED_BLOCKS_VECTOR_SLICE_H */
