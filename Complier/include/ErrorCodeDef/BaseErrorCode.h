#pragma once
/*
	|SYSTEMID|COMPONENTID|CODEID|
	|#       |##         |###   |
	10010001:
*/
#define COMPONENTBIT  1000
#define CODEBIT       10000

enum SYSTEMBASEID
{
	SYSTEM_SID_UI          = 1,
	SYSTEM_SID_ALG         = 2,
	SYSTEM_SID_LOG         = 3,
	SYSTEM_SID_XML         = 4,
	SYSTEM_SID_CRYPT       = 5,
	SYSTEM_SID_DATABASE    = 6,
	SYSTEM_SID_TRANSLATION = 7
};

enum UI_COMPONENTBASEID
{
	UI_CID_QTWIDGETS = (SYSTEM_SID_UI * COMPONENTBIT) + 1,
	UI_CID_QTWIDGETS2 = (SYSTEM_SID_UI * COMPONENTBIT) + 2
};
enum CRYPT_COMPONENTBASEID
{
	CRYPT_CID_SH256_ENCRYPT     = (SYSTEM_SID_CRYPT * COMPONENTBIT) + 1,
	CRYPT_CID_AES256_ENCRYPT    = (SYSTEM_SID_CRYPT * COMPONENTBIT) + 2,
	CRYPT_CID_AES256_DECRYPT    = (SYSTEM_SID_CRYPT * COMPONENTBIT) + 3,
	CRYPT_CID_AUTHORIZTION      = (SYSTEM_SID_CRYPT * COMPONENTBIT) + 4
};