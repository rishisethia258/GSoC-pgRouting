/*PGR-GNU*****************************************************************
File: bellman_ford_driver.h

Generated with Template by:
Copyright (c) 2015 pgRouting developers
Mail: project@pgrouting.org

Function's developer:
Copyright (c) 2018 Sourabh Garg
Mail: sourabh.garg.mat@gmail.com

------

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

 ********************************************************************PGR-GNU*/

#ifndef INCLUDE_DRIVERS_BELLMAN_FORD_BELLMAN_FORD_NEG_DRIVER_H_
#define INCLUDE_DRIVERS_BELLMAN_FORD_BELLMAN_FORD_NEG_DRIVER_H_
#pragma once

/* for size-t */
#ifdef __cplusplus
#   include <cstddef>
using Edge_t = struct Edge_t;
using General_path_element_t = struct General_path_element_t;
#else
#   include <stddef.h>
typedef struct Edge_t Edge_t;
typedef struct General_path_element_t General_path_element_t;
#endif

#include "c_types/pgr_combination_t.h"

#ifdef __cplusplus
extern "C" {
#endif

    /*********************************************************
      TEXT,
    BIGINT,
    BIGINT,
    directed BOOLEAN DEFAULT true,
    only_cost BOOLEAN DEFAULT false,
     ********************************************************/


    void
        do_pgr_bellman_ford_neg(
                Edge_t  *positive_edges,
                size_t total_positive_edges,
                Edge_t  *negative_edges,
                size_t total_negative_edges,
                pgr_combination_t  *combinations,
                size_t total_combinations,
                int64_t  *start_vidsArr,
                size_t size_start_vidsArr,
                int64_t  *end_vidsArr,
                size_t size_end_vidsArr,
                bool directed,
                bool only_cost,

                General_path_element_t **return_tuples,
                size_t *return_count,
                char ** log_msg,
                char ** notice_msg,
                char ** err_msg);


#ifdef __cplusplus
}
#endif

#endif  // INCLUDE_DRIVERS_BELLMAN_FORD_BELLMAN_FORD_NEG_DRIVER_H_