/*
 * Author: Xiangfu Liu <xiangfu@openmobilefree.net>
 * Bitcoin:	1CanaaniJzgps8EV6Sfmpb7T8RutpaeyFn
 *
 * This is free and unencumbered software released into the public domain.
 * For details see the UNLICENSE file at the root of the source tree.
 */

#ifndef _PROTOCOL_H_
#define _PROTOCOL_H_

/* Avalon4 protocol package type */
#define AVA4_MM_VER_LEN	15
#define AVA4_MM_DNA_LEN	8
#define AVA4_H1	'C'
#define AVA4_H2	'N'

#define AVA4_P_COINBASE_SIZE	(6 * 1024 + 64)
#define AVA4_P_MERKLES_COUNT	30

#define AVA4_P_COUNT	40
#define AVA4_P_DATA_LEN 32

/* Broadcase with block iic_write*/
#define AVA4_P_DETECT	0x10

/* Broadcase With non-block iic_write*/
#define AVA4_P_STATIC	0x11
#define AVA4_P_JOB_ID	0x12
#define AVA4_P_COINBASE	0x13
#define AVA4_P_MERKLES	0x14
#define AVA4_P_HEADER	0x15
#define AVA4_P_TARGET	0x16

/* Broadcast with block iic_write*/
#define AVA4_P_RW       0x17

/* Broadcase or with I2C address */
#define AVA4_P_SET	0x20
#define AVA4_P_FINISH	0x21

/* Have to send with I2C address */
#define AVA4_P_POLLING	0x30
#define AVA4_P_REQUIRE	0x31
#define AVA4_P_TEST	0x32

/* Back to host */
#define AVA4_P_ACKDETECT	0x40
#define AVA4_P_STATUS		0x41
#define AVA4_P_NONCE		0x42
#define AVA4_P_TEST_RET		0x43
#define AVA4_P_ACKRW		0x44

#define AVA4_MODULE_BROADCAST	0
#endif	/* _PROTOCOL_H_ */
