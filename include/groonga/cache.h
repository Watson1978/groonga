/*
  Copyright(C) 2013-2017 Brazil

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#pragma once

#ifdef  __cplusplus
extern "C" {
#endif

#define GRN_CACHE_DEFAULT_MAX_N_ENTRIES 100
typedef struct _grn_cache grn_cache;

GRN_API grn_cache *grn_cache_open(grn_ctx *ctx);
GRN_API grn_rc grn_cache_close(grn_ctx *ctx, grn_cache *cache);

GRN_API grn_rc grn_cache_current_set(grn_ctx *ctx, grn_cache *cache);
GRN_API grn_cache *grn_cache_current_get(grn_ctx *ctx);

GRN_API grn_rc grn_cache_set_max_n_entries(grn_ctx *ctx,
                                           grn_cache *cache,
                                           unsigned int n);
GRN_API unsigned int grn_cache_get_max_n_entries(grn_ctx *ctx,
                                                 grn_cache *cache);

#ifdef __cplusplus
}
#endif
