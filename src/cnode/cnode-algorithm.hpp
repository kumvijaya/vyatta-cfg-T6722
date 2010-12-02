/*
 * Copyright (C) 2010 Vyatta, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _CNODE_ALGORITHM_HPP_
#define _CNODE_ALGORITHM_HPP_

#include <cnode/cnode.hpp>

namespace cnode {

void show_cfg_diff(const CfgNode& cfg1, const CfgNode& cfg2, bool show_def,
                   bool hide_secret);
void show_cfg(const CfgNode& cfg, bool show_def, bool hide_secret);

void show_cmds_diff(const CfgNode& cfg1, const CfgNode& cfg2);
void show_cmds(const CfgNode& cfg);

void get_cmds_diff(const CfgNode& cfg1, const CfgNode& cfg2,
                   vector<vector<string> >& del_list,
                   vector<vector<string> >& set_list,
                   vector<vector<string> >& com_list);
void get_cmds(const CfgNode& cfg, vector<vector<string> >& set_list,
              vector<vector<string> >& com_list);

} // namespace cnode

#endif /* _CNODE_ALGORITHM_HPP_ */

