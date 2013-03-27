/*
 * lxc.h: Go bindings for lxc
 *
 * Copyright © 2013, S.Çağlar Onur
 *
 * Authors:
 * S.Çağlar Onur <caglar@10ur.org>
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2, as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <stdio.h>
#include <stdbool.h>

#include <lxc/lxc.h>
#include <lxc/lxccontainer.h>

bool container_defined(struct lxc_container *c) {
	return c->is_defined(c);
}

const char* container_state(struct lxc_container *c) {
	return c->state(c);
}

bool container_running(struct lxc_container *c) {
	return c->is_running(c);
}

bool container_freeze(struct lxc_container *c) {
	return c->freeze(c);
}

bool container_unfreeze(struct lxc_container *c) {
	return c->unfreeze(c);
}

pid_t container_init_pid(struct lxc_container *c) {
	return c->init_pid(c);
}

void container_want_daemonize(struct lxc_container *c) {
	c->want_daemonize(c);
}

bool container_create(struct lxc_container *c, char *t, char **argv) {
	return c->create(c, t, argv);
}

bool container_start(struct lxc_container *c, int useinit, char ** argv) {
	return c->start(c, useinit, argv);
}

bool container_stop(struct lxc_container *c) {
	return c->stop(c);
}

bool container_shutdown(struct lxc_container *c, int timeout) {
	return c->shutdown(c, timeout);
}

char* container_config_file_name(struct lxc_container *c) {
	return c->config_file_name(c);
}

bool container_destroy(struct lxc_container *c) {
	return c->destroy(c);
}

bool container_wait(struct lxc_container *c, char *state, int timeout) {
	return c->wait(c, state, timeout);
}