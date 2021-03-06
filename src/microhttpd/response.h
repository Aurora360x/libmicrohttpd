/*
     This file is part of libmicrohttpd
     Copyright (C) 2007 Daniel Pittman and Christian Grothoff

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

/**
 * @file response.h
 * @brief  Methods for managing response objects
 * @author Daniel Pittman
 * @author Christian Grothoff
 */

#ifndef RESPONSE_H
#define RESPONSE_H

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * Increments the reference counter for the @a response.
 *
 * @param response object to modify
 */
void
MHD_increment_response_rc (struct MHD_Response *response);


/**
 * We are done sending the header of a given response
 * to the client.  Now it is time to perform the upgrade
 * and hand over the connection to the application.
 *
 * @param response the response that was created for an upgrade
 * @param connection the specific connection we are upgrading
 * @return #MHD_YES on success, #MHD_NO on failure (will cause
 *        connection to be closed)
 */
// FIXME: This function will need to be called at the right place(s)
// in the connection processing (just after we are done sending the header)
// (for responses that have the 'upgrade_header' callback set).
int
MHD_response_execute_upgrade_ (struct MHD_Response *response,
                               struct MHD_Connection *connection);




#ifdef __cplusplus
}
#endif
#endif
