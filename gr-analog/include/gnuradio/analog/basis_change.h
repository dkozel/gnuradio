/* -*- c++ -*- */
/*
 * Copyright 2019 Derek Kozel.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_ANALOG_BASIS_CHANGE_H
#define INCLUDED_ANALOG_BASIS_CHANGE_H

#include <gnuradio/analog/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace analog {

    /*!
     * \brief <+description of block+>
     * \ingroup analog
     *
     */
    class ANALOG_API basis_change : virtual public gr::sync_block
    {
     public:
      typedef std::shared_ptr<basis_change> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of analog::basis_change.
       *
       * To avoid accidental use of raw pointers, analog::basis_change's
       * constructor is in a private implementation
       * class. analog::basis_change::make is the public interface for
       * creating new instances.
       */
      static sptr make(int vlen, bool circ_to_lin);
    };

  } // namespace analog
} // namespace gr

#endif /* INCLUDED_ANALOG_BASIS_CHANGE_H */

