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

	// item the box mobs drop all
	{ "item_the_box",					&battle_config.item_the_box,				0,			0,			1,	},
	{ "item_1",							&battle_config.item_1,						500,		500,		INT_MAX,	},
	{ "item_2",							&battle_config.item_2,						500,		500,		INT_MAX,	},
	// limit the sale value of all [null]
	{ "limit_sale_price",				&battle_config.limit_sale_price,			0,			0,			INT_MAX,	},
