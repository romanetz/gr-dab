/* -*- c++ -*- */
/* 
 * Copyright 2015 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_DAB_ESTIMATE_SAMPLE_RATE_BF_H
#define INCLUDED_DAB_ESTIMATE_SAMPLE_RATE_BF_H

#include <dab/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace dab {

    /*!
     * \brief <+description of block+>
     * \ingroup dab
     *
     */
    class DAB_API estimate_sample_rate_bf : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<estimate_sample_rate_bf> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of dab::estimate_sample_rate_bf.
       *
       * To avoid accidental use of raw pointers, dab::estimate_sample_rate_bf's
       * constructor is in a private implementation
       * class. dab::estimate_sample_rate_bf::make is the public interface for
       * creating new instances.
       */
      static sptr make(float expected_sample_rate, int frame_length);
    };

  } // namespace dab
} // namespace gr

#endif /* INCLUDED_DAB_ESTIMATE_SAMPLE_RATE_BF_H */
