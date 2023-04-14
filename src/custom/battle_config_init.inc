// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

/**
 * Custom battle config initializations
 * Place the definition of custom battle configuration initializations in this file.
 *
 * Do not forget to add a comma at the end of the line, if you want to add another config
 *
 * Format:
 *	 { "name", &battle_config.<variable name>, <default value>, <minimum value>, <maximum value> },
 **/

	// item the box mobs drop all.
	{ "item_the_box",					&battle_config.item_the_box,				0,			0,			1,	},
	{ "item_1",							&battle_config.item_1,						500,		500,		INT_MAX,	},
	{ "item_2",							&battle_config.item_2,						500,		500,		INT_MAX,	},
	// Randomly drop all MVP items. [null]
	{ "mvp_random_item_drop",			&battle_config.mvp_random_item_drop,		0,			0,			1,	},
	{ "item_rate_mvp_random",               &battle_config.item_rate_mvp_random,            100,    0,      1000000,        },
	// limit the sale value of all. [null]
	{ "limit_sale_price",				&battle_config.limit_sale_price,			0,			0,			INT_MAX,	},

/**
* Extended Vending system [Lilith]
**/
{ "extended_vending",					&battle_config.extended_vending,				1,		0,		1,				},
{ "show_broadcast_info",				&battle_config.show_broadcast_info,				1,		0,		1,				},
{ "show_item_vending",					&battle_config.show_item_vending,				1,		0,		1,				},
{ "ex_vending_info",					&battle_config.ex_vending_info,					1,		0,		1,				},
{ "ex_vending_report",					&battle_config.ex_vending_report,				1,		0,		1,				}, // [Easycore]
{ "ex_buying_bound",					&battle_config.ex_buying_bound,					1,		0,		1,				}, // [Easycore]
{ "item_zeny",							&battle_config.item_zeny,						0,		0,		INT32_MAX,		},
{ "item_cash",							&battle_config.item_cash,						0,		0,		INT32_MAX,		},
