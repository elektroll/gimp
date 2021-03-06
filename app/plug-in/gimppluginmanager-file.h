/* GIMP - The GNU Image Manipulation Program
 * Copyright (C) 1995 Spencer Kimball and Peter Mattis
 *
 * gimppluginmanager-file.h
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GIMP_PLUG_IN_MANAGER_FILE_H__
#define __GIMP_PLUG_IN_MANAGER_FILE_H__


gboolean   gimp_plug_in_manager_register_load_handler (GimpPlugInManager *manager,
                                                       const gchar       *name,
                                                       const gchar       *extensions,
                                                       const gchar       *prefixes,
                                                       const gchar       *magics);
gboolean   gimp_plug_in_manager_register_save_handler (GimpPlugInManager *manager,
                                                       const gchar       *name,
                                                       const gchar       *extensions,
                                                       const gchar       *prefixes);

gboolean   gimp_plug_in_manager_register_mime_type    (GimpPlugInManager *manager,
                                                       const gchar       *name,
                                                       const gchar       *mime_type);

gboolean   gimp_plug_in_manager_register_handles_uri  (GimpPlugInManager *manager,
                                                       const gchar       *name);

gboolean   gimp_plug_in_manager_register_thumb_loader (GimpPlugInManager *manager,
                                                       const gchar       *load_proc,
                                                       const gchar       *thumb_proc);
gboolean   gimp_plug_in_manager_uri_has_exporter      (GimpPlugInManager *manager,
                                                       const gchar       *uri);


#endif /* __GIMP_PLUG_IN_MANAGER_FILE_H__ */
