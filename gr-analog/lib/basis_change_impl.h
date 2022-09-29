/* -*- c++ -*- */
/*
 * Copyright 2019 Derek Kozel.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_ANALOG_BASIS_CHANGE_IMPL_H
#define INCLUDED_ANALOG_BASIS_CHANGE_IMPL_H

#include <gnuradio/analog/basis_change.h>

namespace gr {
  namespace analog {

    class basis_change_impl : public basis_change
    {
     private:
      int d_vlen = 1;
      bool d_circ_to_lin = true;
     public:
      basis_change_impl(int vlen, bool circ_to_lin);
      ~basis_change_impl();

      // Where all the action really happens
      int work(
              int noutput_items,
              gr_vector_const_void_star &input_items,
              gr_vector_void_star &output_items
      );
    };

  } // namespace analog
} // namespace gr

#endif /* INCLUDED_ANALOG_BASIS_CHANGE_IMPL_H */

