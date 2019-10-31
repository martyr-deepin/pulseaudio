#ifndef foodbusifaceclienthfoo
#define foodbusifaceclienthfoo

/***
  This file is part of PulseAudio.

  Copyright 2009 Tanu Kaskinen

  PulseAudio is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published
  by the Free Software Foundation; either version 2.1 of the License,
  or (at your option) any later version.

  PulseAudio is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with PulseAudio; if not, see <http://www.gnu.org/licenses/>.
***/

/* This object implements the D-Bus interface org.PulseAudio.Core1.Client.
 *
 * See http://www.freedesktop.org/wiki/Software/PulseAudio/Documentation/Developer/Clients/DBus/Client/
 * for the Client interface documentation.
 */

#include <pulsecore/client.h>
#include <pulsecore/protocol-dbus.h>

#include "iface-core.h"

#define PA_DBUSIFACE_CLIENT_INTERFACE PA_DBUS_CORE_INTERFACE ".Client"

typedef struct pa_dbusiface_client pa_dbusiface_client;

pa_dbusiface_client *pa_dbusiface_client_new(pa_dbusiface_core *core, pa_client *client);
void pa_dbusiface_client_free(pa_dbusiface_client *c);

const char *pa_dbusiface_client_get_path(pa_dbusiface_client *c);

#endif
