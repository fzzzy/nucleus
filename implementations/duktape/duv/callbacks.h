#ifndef CALLBACKS_H
#define CALLBACKS_H

#include "duv.h"

// Handle method callbacks
void duv_on_close(uv_handle_t *handle);
void duv_on_alloc(uv_handle_t *handle, size_t suggested_size, uv_buf_t *buf);

// Timer method callbacks
void duv_on_timeout(uv_timer_t *timer);

// Prepare method callbacks
void duv_on_prepare(uv_prepare_t *prepare);

// Stream method callbacks
void duv_on_read(uv_stream_t *stream, ssize_t nread, const uv_buf_t *buf);
void duv_on_write(uv_write_t *shutdown, int status);
void duv_on_connect(uv_connect_t *shutdown, int status);
void duv_on_shutdown(uv_shutdown_t *shutdown, int status);
void duv_on_connection(uv_stream_t *server, int status);

#endif
